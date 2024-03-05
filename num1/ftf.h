char ssid[] = "App";
char pass[] = "09876512345";
int timer;
int led = 15;
void setup()
{
   Blynk.begin(auth, ssid, pass);
   Serial.begin(9600);
   pinMode(led, OUTPUT);
}
BLYNK_WRITE(V5)
{
   timer = param.asInt();
   Serial.print("Got a value: ");
   Serial.println(timer);
}
void loop()
{
   Blynk.run();
   if (timer == 1){
     digitalWrite(led, HIGH);
   }
   else {
     digitalWrite(led, LOW);
   }
}
