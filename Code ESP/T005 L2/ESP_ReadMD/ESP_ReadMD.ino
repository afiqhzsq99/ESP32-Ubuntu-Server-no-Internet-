//////////////////////////////////////////////////////////////////
// Project: ESP32 Read MySQL & Display P10  MD_MAX72 and RTC   ///
//////////////////////////////////////////////////////////////////
#define TITLE           "IR DATE MAX72"
#include <SPI.h>
#include <Wire.h>
#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include "Font_Data.h"
#include "RTClib.h"
#include <WiFiClient.h>
#include <HTTPClient.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 12
#define DATA_PIN    27  //MOSI
#define CLK_PIN     25  //SCK
#define CS_PIN      26  //SS
#define SPEED_TIME  75
#define PAUSE_TIME  0
#define MAX_MESG  20

int day, month, year, x, y, z, change, left = 0, right = 0;
char sz0[50], sz1[50], dateC[50], timeC[50];
String t, t_day, t_month, t_year, t_hour, t_min, t_full, t_y2;

RTC_DS3231 rtc;
MD_Parola P = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

//----------------------------------------SSID and Password of your WiFi router.
const char* ssid = "TP-LINK_AP_1428_Office";  //U cetak dor com 2.4@unifi
const char* password = "95415789"; //lavender4
//----------------------------------------

//----------------------------------------Web Server address / IPv4
const char *host = "http://192.168.0.100/";
unsigned long previousMillis = 0;   
const long interval = 7000;
unsigned long previousMillis2 = 0;   
const long interval2 = 5000;
char array[100];
String c1, c2, c3, c4, c5;
//----------------------------------------

void setup(void) {

  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password); //--> Connect to your WiFi router
  Serial.println("");

  //----------------------------------------Wait for connection
  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  //----------------------------------------If successfully connected to the wifi router, the IP Address that will be visited is displayed in the serial monitor
  Serial.println("");
  Serial.print("Successfully connected to : ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println();
  //----------------------------------------

  //----------------------------------------Setup RTC
  delay(1000);
  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }
  Serial.println("OK");

  if (rtc.lostPower()) {
    Serial.println("RTC lost power, lets set the time!");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    
    // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0)); // January 21, 2014 at 3am you would call:
  }
  //rtc.adjust(DateTime(F(__DATE__), F(__TIME__))); //-> Set the time and date based on your computer time and date. Use this line of code if it doesn't work in "if (! rtc.isrunning())"
  //rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0)); // If the time and date are successfully set, then deactivate the code line (make the code a comment), then re-upload the code.
  //----------------------------------------
  
  //----------------------------------------Setup MAX27
  P.begin(3); // 3 
  P.setInvert(false);
  P.setZone(0, 0, 3);    
  P.setZone(1, 4, 7); 
  P.setZone(2, 8, 11);  
  P.setFont(0, numeric7Se); //kecik numeric7Seg
  P.setFont(1, numeric7Se); //mid  
  P.setFont(2, numeric7Se); //mid   
  //----------------------------------------
}

void GetDate() {
  DateTime now = rtc.now();
  t_day = now.day(), DEC;
  t_month = now.month(), DEC;
  t_year = now.year(), DEC;
  t_hour = now.hour(), DEC;
  t_min = now.minute(), DEC;

  x = t_year.toInt();
  x = x - 2000;
  t_y2 = Convert2(x);

  y = t_min.toInt();
  t_min = Convert(y);
}

void Display(){
  //========================================================================== change display for panel 1
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    if (change == 1) { change = 0; Serial.println("Change"); }
    else { change = 1; Serial.println("Change");}
    
    String f = t_day + "/" + t_month + "/" + t_year + " " + t_hour + ":" + t_min;
    Serial.println(f);
  }
  
  P.displayAnimate();
  //========================================================================== panel 1 - date & time
  if (change == 1){   //date
      t_full = t_day + "." + t_month + "." + t_y2;
      //t_full = "25.22.22";
      t_full.toCharArray(dateC, t_full.length() + 1);
      P.setFont(0, numeric7Seg);
      P.displayZoneText(0, dateC, PA_CENTER, SPEED_TIME, PAUSE_TIME, PA_PRINT, PA_NO_EFFECT);
  }

  else{    //time
      t_full = t_hour + ":" + t_min;
      t_full.toCharArray(timeC, t_full.length() + 1);
      P.setFont(0, numeric7Se);
      P.displayZoneText(0, timeC, PA_CENTER, SPEED_TIME, PAUSE_TIME, PA_PRINT, PA_NO_EFFECT);
  }
   
  //========================================================================== panel 2 - number
  c1.toCharArray(sz0, c1.length() + 1);
  P.displayZoneText(1, sz0, PA_CENTER, SPEED_TIME, PAUSE_TIME, PA_PRINT, PA_NO_EFFECT);

  //========================================================================== panel 3 - number
  c2.toCharArray(sz1, c2.length() + 1);
  P.displayZoneText(2, sz1, PA_CENTER, SPEED_TIME, PAUSE_TIME, PA_PRINT, PA_NO_EFFECT);//PA_CENTER
}

String Convert(int sInput) {
  if (sInput < 10)
  {
    return"0" + String(sInput);
  }
  else
  {
    return String(sInput);
  }
}

String Convert2(int sInput) {
    return String(sInput);
}

void loop(void) {
  unsigned long currentMillis2 = millis();
  if (currentMillis2 - previousMillis2 >= interval2) {
    previousMillis2 = currentMillis2;
    // put your main code here, to run repeatedly:
    HTTPClient http; //--> Declare object of class HTTPClient
  
    //----------------------------------------Getting Data from MySQL Database
    String GetAddress, LinkGet, getData;
    int id = 1; //--> ID in Database
    //GetAddress = "SQL2/GetData01.php"; 
    GetAddress = "getData1.php"; 
    LinkGet = host + GetAddress; //--> Make a Specify request destination
    getData = "ID=" + String(id);
    Serial.println("----------------Connect to Server-----------------");
    Serial.print("Request Link : ");
    Serial.println(LinkGet);
    http.begin(LinkGet); //--> Specify request destination
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");    //Specify content-type header
    int httpCodeGet = http.POST(getData); //--> Send the request
    c1 = http.getString(); //--> Get the response payload from server
    Serial.print("Response Code : "); //--> If Response Code = 200 means Successful connection, if -1 means connection failed. For more information see here : https://en.wikipedia.org/wiki/List_of_HTTP_status_codes
    Serial.println(httpCodeGet); //--> Print HTTP return code
    Serial.print("Count 1: ");
    Serial.println(c1); //--> Print request response payload
    
    id = 2; //--> ID in Database
    //GetAddress = "SQL2/GetData04.php"; 
    GetAddress = "getData2.php"; 
    LinkGet = host + GetAddress; //--> Make a Specify request destination
    getData = "ID=" + String(id);
    //Serial.print("Request Link : ");
   // Serial.println(LinkGet);
    http.begin(LinkGet); //--> Specify request destination
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");    //Specify content-type header
    httpCodeGet = http.POST(getData); //--> Send the request
    c2 = http.getString(); //--> Get the response payload from server
    Serial.print("Count 2: ");
    Serial.println(c2); //--> Print request response payload

    id = 3; //--> ID in Database
    GetAddress = "getData3.php"; 
    LinkGet = host + GetAddress; //--> Make a Specify request destination
    getData = "ID=" + String(id);
   // Serial.print("Request Link : ");
   // Serial.println(LinkGet);
    http.begin(LinkGet); //--> Specify request destination
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");    //Specify content-type header
    httpCodeGet = http.POST(getData); //--> Send the request
    c3 = http.getString(); //--> Get the response payload from server
    Serial.print("Count 3: ");
    Serial.print(c3); //--> Print request response payload

    id = 4; //--> ID in Database
    GetAddress = "getData4.php"; 
    LinkGet = host + GetAddress; //--> Make a Specify request destination
    getData = "ID=" + String(id);
   // Serial.print("Request Link : ");
   // Serial.println(LinkGet);
    http.begin(LinkGet); //--> Specify request destination
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");    //Specify content-type header
    httpCodeGet = http.POST(getData); //--> Send the request
    c4 = http.getString(); //--> Get the response payload from server
    Serial.print("Count 4: ");
    Serial.print(c4); //--> Print request response payload

    id = 5; //--> ID in Database
    GetAddress = "getData5.php"; 
    LinkGet = host + GetAddress; //--> Make a Specify request destination
    getData = "ID=" + String(id);
  //  Serial.print("Request Link : ");
  //  Serial.println(LinkGet);
    http.begin(LinkGet); //--> Specify request destination
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");    //Specify content-type header
    httpCodeGet = http.POST(getData); //--> Send the request
    c5 = http.getString(); //--> Get the response payload from server
    Serial.print("Count 5: ");
    Serial.print(c5); //--> Print request response payload
    
    http.end(); //--> Close connection
    Serial.println("Please wait 5 seconds for the next connection.");
    Serial.println("----------------Closing Connection----------------");
    Serial.println();
    //----------------------------------------
  }

  GetDate();
  Display();
}
