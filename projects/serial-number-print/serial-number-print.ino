void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
   for (int i=1; i<=5000; i++)
  {
    Serial.print("i=");
    Serial.println(i);
    delay(1000);
  }
}
