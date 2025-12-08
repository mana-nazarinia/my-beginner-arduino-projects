
void setup() {
  // put your setup code here, to run once:
  pinMode(9, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int input = digitalRead(9);
  if(input==0)
  {
    digitalWrite(12, HIGH);
  }
  else
  {
    digitalWrite(12, LOW);
  }
  Serial.println(input);

}
