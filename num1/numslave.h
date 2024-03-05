
char auth[] = "b61f309c6202491b9fcd0d0d3a8986b1"; // nhap ma Token ket noi Blynk
char ssid[] = "AITT_3";                           // nhap dia chi wifi 
char pass[] = "66668888";
void setup()
{
   Serial.begin(9600);
   Blynk.begin(auth, ssid, pass);  // ket noi server 
   pinMode(LED, OUTPUT);                                  
}
BLYNK_WRITE(V0)                     //  ham nay duoc goi den khi Widget Vo thay doi trang thai
{
   int pinValue = param.asInt();       // gan gia tri cua chan V0 cho bien pinValue
   
   if (pinValue == 1) {
   digitalWrite(LED, HIGH);         // khi nhan nut gia tri pinValue bang 1, led sang
   }
   
   else {
   digitalWrite(LED, LOW);        // khi nha nut gia tri pinValue bang 0, led tat
   }
}
void loop()
{
   Blynk.run();                   //chay chuong trinh Blynk
}
