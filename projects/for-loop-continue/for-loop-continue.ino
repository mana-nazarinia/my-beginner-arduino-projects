void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int i=1;
  
  for(i=1; i<= 10; i++)
  {
    Serial.print("Count:");
    Serial.println(i);
    if(i==5)
    {
      continue;
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
