#define TITLE           "E18-D80NK SENSOR IR HTTP MYSQL SENDER ESP-NOW" //MAIN
#include <WiFi.h>
#include <EEPROM.h>
#include <DMD32.h>
#include "fonts/Font_6x14.h"

#define DISPLAYS_ACROSS 1
#define DISPLAYS_DOWN   1
#define SENSOR_PIN 5
#define RESET_PIN 13 
#define MINUS_PIN 12
#define ADD_PIN 14
#define BOARD_ID 1
#define LED_PIN 27
#define LEDM_PIN 26
#define LEDR_PIN 25
#define EEPROM_SIZE 3

DMD dmd(DISPLAYS_ACROSS, DISPLAYS_DOWN);

int y, p, n, L, bs4, lbs4, bstate, lbstate, bstate2, lbstate2, bstate3, lbstate3, flag, flag2;
bool x, m;
char array[10];

unsigned long previousMillis = 0;  
const long interval = 200;
unsigned long previousMillis2 = 0;  
const long interval2 = 5000;

void setup() {
  // Init Serial Monitor
  Serial.begin(115200);
  EEPROM.begin(EEPROM_SIZE);
  
  pinMode(SENSOR_PIN, INPUT_PULLUP);
  pinMode(MINUS_PIN, INPUT_PULLUP);
  pinMode(ADD_PIN, INPUT_PULLUP);
  pinMode(RESET_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LEDM_PIN, OUTPUT);
  pinMode(LEDR_PIN, OUTPUT);
  bs4 = digitalRead(SENSOR_PIN);
  bstate2 = digitalRead(MINUS_PIN);
  bstate3 = digitalRead(ADD_PIN);
  bstate = digitalRead(RESET_PIN);
  
  x = false; m = false;

  //read the last data from flash memory
  flag2 = EEPROM.read(1);
  if (flag2 == 1) { //-------------------data available
    p = EEPROM.read(0); 
    n = EEPROM.read(2); 
    y = (n * 232) + p;
    Serial.print("Data available // ");
    Serial.print(p); Serial.print(" "); Serial.print(n); Serial.print(" "); Serial.println(y); 
  }
  else{
    y = p = n = 0;  
    Serial.println("No data // " + y);
  }

  dmd.clearScreen(true);
}

void loop() {
  dmd.scanDisplayBySPI();
  dmd.clearScreen(true);
  
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    //-----sensor
    L = digitalRead(SENSOR_PIN);
    if(L == 0){/////////sini
      Serial.println(" Obstacle detected " );     
      m = true;
      digitalWrite(LED_PIN, HIGH);
    }
    else{
       //Serial.println("  === All clear");
       m = false;
       digitalWrite(LED_PIN, LOW);
    }
  
    if (m){
      flag2++;
      if (flag2 == 1){
        y++;
        EEPROM.write(1, flag);
        EEPROM.commit();
       
      }
    }
    else{
      flag2 = 0;
      
    }

      //-----add
    lbstate3 = bstate3;      // save the last state
    bstate3 = digitalRead(ADD_PIN); // read new state

    if (lbstate3 == HIGH && bstate3 == LOW) {
         y++;
         delay(300);
         Serial.println("Add button");
         digitalWrite(LED_PIN, HIGH);
         delay(300);
         digitalWrite(LED_PIN, LOW);
    }
    
    //-----minus
    lbstate2 = bstate2;      // save the last state
    bstate2 = digitalRead(MINUS_PIN); // read new state

    if (lbstate2 == HIGH && bstate2 == LOW) {
      if (y>0){
         y--;
         delay(300);
         Serial.println("Minus");
         digitalWrite(LEDM_PIN, HIGH);
         delay(300);
         digitalWrite(LEDM_PIN, LOW);
      }
    }
    
    //-----reset
    lbstate = bstate;      // save the last state
    bstate = digitalRead(RESET_PIN); // read new state

    if (lbstate == HIGH && bstate == LOW) {
       y = 0;
       delay(300);
       Serial.println("Reset");
       digitalWrite(LEDR_PIN, HIGH);
       delay(300);
       digitalWrite(LEDR_PIN, LOW);
    }

 // y = y +  1; ////
  //---save data, max 232 sahaja!  x = (n * 232) + m;
    p = y;
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
  //-----display data
  dmd.selectFont(Font_6x14); //set
  String xy = Convert(y) ;
  xy.toCharArray(array, xy.length() + 1); 
  dmd.drawString( 1, 0, array, xy.length(), GRAPHICS_NORMAL);

  unsigned long currentMillis2 = millis();
  if (currentMillis2 - previousMillis2 >= interval2) {
    previousMillis2 = currentMillis2;
    Serial.println(y);
  }
}

String Convert(int sInput) {
    return String(sInput);
}
