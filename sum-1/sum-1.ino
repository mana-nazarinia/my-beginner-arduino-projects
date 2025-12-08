void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int a=10;
  int b=5;
  int sum=a+b;

  Serial.print("the sum of   ");
  Serial.print(a);
  Serial.print("+");
  Serial.print(b);
  Serial.print("=");
  Serial.println(sum);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("This is running...");
 // delay(100);
}
