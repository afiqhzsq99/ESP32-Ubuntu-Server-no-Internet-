#define TITLE           "E18-D80NK SENSOR BUTTON HTTP MYSQL SENDER ESP-NOW" //Main
#include <esp_now.h> 
#include <HTTPClient.h>
#include <WiFi.h>
#include <EEPROM.h>
#define BOARD_ID 2

#define LED_PIN 5
#define LEDM_PIN 18
#define LEDR_PIN 19
#define EEPROM_SIZE 3

const char WIFI_SSID[] = "TP-LINK_AP_1428_Office"; 
const char WIFI_PASSWORD[] = "95415789"; 
String HOST_NAME = "http://192.168.0.100"; // change to your PC's IP address

//--------------TUKAR ID BARU L1-------------------------------
String UPDATE_NAME   = "/update_count2.php"; //tukar nombor
//-------------------------------------------------------------

String queryString = "?count=";
String t;

unsigned long previousMillis = 0;  
const long interval = 5000;
int count, p, n, dis, dis2, dis3, bs, lbs, bs2, lbs2, bs3, lbs3, flagD, limit, New;
bool x;

int32_t getWiFiChannel(const char *ssid) {
  if (int32_t n = WiFi.scanNetworks()) {
      for (uint8_t i=0; i<n; i++) {
          if (!strcmp(ssid, WiFi.SSID(i).c_str())) {
              return WiFi.channel(i);
          }
      }
  }
  return 0;
}

void setup() {
  // Init Serial Monitor
  Serial.begin(115200);
  EEPROM.begin(EEPROM_SIZE);
  
  pinMode(LED_PIN, INPUT_PULLUP);
  pinMode(LEDM_PIN, INPUT_PULLUP);
  pinMode(LEDR_PIN, INPUT_PULLUP);
  bs = digitalRead(LED_PIN);
  x = false;
  
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());
    
  int32_t channel = getWiFiChannel(WIFI_SSID);

  //read the last data from flash memory
  flagD = EEPROM.read(1);
  if (flagD == 1) { //-------------------data available
    p = EEPROM.read(0); 
    n = EEPROM.read(2); 
    count = (n * 232) + p;
    Serial.print("Data available // ");
    Serial.print(p); Serial.print(" "); Serial.print(n); Serial.print(" "); Serial.println(count); 
  }
  else{
    count = p = n = 0;  
    Serial.println("No data // " + count);
  }

  xTaskCreate(  //----------BECOME RECEIVER
    task2,      //---function name
    "Task 1",   //---task name
    5000,       //---stack size
    NULL,       //---task parameters
    1,          //---task priority
    NULL        //---task handle
    );
    
  //limit = 0;
}

String Convert(int sInput) {
    return String(sInput);
}

void task2(void * parameters){
  for(;;){          
        //-----Send data MySQL
        HTTPClient http;
              
        t = Convert(count); //t = Convert(y);
        http.begin(HOST_NAME + UPDATE_NAME + queryString + t); //HTTP
        int httpCode = http.GET();
              
        // httpCode will be negative on error
        if(httpCode > 0) {
        // file found at server
           if(httpCode == HTTP_CODE_OK) {
             String payload = http.getString();
             Serial.println(payload);
           } else {
             // HTTP header has been send and Server response header has been handled
             Serial.printf("[HTTP] GET... code: %d\n", httpCode);
           }
         } else {
           Serial.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
         }
         http.end();
         Serial.print(" Data send: ");  Serial.print(count);  Serial.println(" for Board ID: 2");  
      //}
      vTaskDelay(1000 / portTICK_PERIOD_MS);
   }
}

void loop() {
   //-----------------------------------ADD
      lbs = bs;                  // save the last state
      bs = digitalRead(LED_PIN); // read new state
      
      if (bs == 1){
        dis++;
        
      }
      else{
        dis = 0;
      }
    
      if (dis == 1){
        count++;
        //limit++;
        Serial.println(count);
      }
    
      //-----------------------------------MINUS
      lbs2 = bs2;                  // save the last state
      bs2 = digitalRead(LEDM_PIN); // read new state
      
      if (bs2 == 1){
        dis2++;
      }
      else{
        dis2 = 0;
      }
    
      if (dis2 == 1){
        count--;
        //limit++;
        Serial.println(count);
      }
    
      //-----------------------------------RESET
      lbs3 = bs3;                  // save the last state
      bs3 = digitalRead(LEDR_PIN); // read new state
      
      if (bs3 == 1){
        dis3++;
      }
      else{
        dis3 = 0;
      }
    
      if (dis3 == 1){
        count = 0;
        //limit++;
        Serial.println(count);
      }

    //---save data, max 232 sahaja!  x = (n * 232) + m;
    p = count;
    if (p > 0){
      if ( p <= 232 ){
         EEPROM.write(0, p);
         EEPROM.write(1, 1);
         EEPROM.write(2, 0); //n
         EEPROM.commit();
      }
      else {
        n = 0;
        while ( p > 232){
           n++;
           p = p - 232;  
        }
        EEPROM.write(0, p);
        EEPROM.write(1, 1);
        EEPROM.write(2, n);
        EEPROM.commit();
      }
    }
      
}
