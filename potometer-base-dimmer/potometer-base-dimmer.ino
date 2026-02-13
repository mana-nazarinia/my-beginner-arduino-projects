int potometer = A0;
int ledrange = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (ledrange, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int poto = analogRead (potometer);
  Serial.println (poto);
  poto = poto/4;

  analogWrite (ledrange, poto);
}
