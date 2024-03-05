#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define Button 0
char auth[] = "85a83f9b7c224a57bd0806417baf3f41";  //ma token project2
char ssid[] = "AITT_3";
char pass[] = "66668888";
void setup()
{
   // Debug console
   Serial.begin(9600);
   Blynk.begin(auth, ssid, pass);
   pinMode(Button, INPUT);
}
void loop()
{
   Blynk.run();
   WidgetLED led(V0);
   if(digitalRead(Button) == 1){
     led.on();
   }
   else{
     led.off();
   }
}
