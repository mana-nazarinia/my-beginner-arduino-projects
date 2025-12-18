void setup() {
  // put your setup code here, to run once:
  pinMode (3, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<=255; i++)
  {
    analogWrite (3, i);
    Serial.println(i);
    delay(50);
  }
}
