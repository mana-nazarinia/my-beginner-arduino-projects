void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  char city[4] = "Shiraz";

  Serial.print("City: ");
  Serial.println(city);

  int num=4;

  if (num % 2==0)
  {
   Serial.println("Even");
  }
  else 
  {
    Serial.println("odd");
  }

}

void loop() {
  // put your main code here, to run repeatedly:
}
