int potometer = A0;
int phcell = A1;
int ledrange = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(1000000);
  pinMode (ledrange, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int poto = analogRead (potometer);
  int ph = analogRead (phcell);
  Serial.println(ph);
  Serial.print (poto);
  Serial.print (" change=");
  
  poto = map (poto, 0, 1023, 0 , 255);
  ph = map (ph, 100, 1000, poto, 0);
  Serial.println (poto);
  analogWrite (ledrange, ph);
}
