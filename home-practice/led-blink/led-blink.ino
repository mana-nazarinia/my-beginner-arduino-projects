const int ledPin=9;
const int keyPin=12;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin, OUTPUT);
  pinMode (keyPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(keyPin) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}
