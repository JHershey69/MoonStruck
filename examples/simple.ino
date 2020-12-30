#include <MoonStruck.h>
#include <ArduinoJson.h>
#include <WiFi.h>


#define HOMESSID "*****"
#define HOMEPW "******"
#define MOONKEY "*************************"


float myLATITUDE = 39.9537291;
float myLONGITUDE = -74.1979192;


//Invoke the library
MoonStruck MS;



void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  delay(200);
  Serial.println("Serial Initialized");

  WiFi.begin(HOMESSID, HOMEPW);
  Serial.print("Connecting...");

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1000);
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("\nCONNECTED!\n");
  }
  
  
  //Call the api
  MS.parseMoonStruck(MOONKEY, myLATITUDE, myLONGITUDE);



  //Print Altitude, moonrise and moonset
  printf("\nMoon Altitude: %f\nMoonrise: %s\nMoonset: %s\n", MS.moon_altitude, MS.moonrise, MS.moonset);



}

void loop() {
  // put your main code here, to run repeatedly:

}
