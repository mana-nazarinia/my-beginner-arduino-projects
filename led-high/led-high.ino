int buttonPin=9;
int ledPin=10;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState=digitalRead(buttonPin);

  if(buttonState==0)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  digitalWrite(ledPin, LOW);
}
