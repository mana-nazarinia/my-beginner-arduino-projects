void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i=2; i<=5; i++)
  {
      pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int potometer= analogRead(A0);
  Serial.println(potometer);

  if (potometer>=0 && potometer<10)
  {
    for (int i=2; i<=5; i++)
    {
      digitalWrite(i, LOW);
    }
  }

  else if (potometer>=10 && potometer<128)
  {
    digitalWrite (2, HIGH);
    for (int i=3; i<=5; i++)
    {
      digitalWrite(i, LOW);
    }
  }

  else if (potometer>=128 && potometer<255)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }

  else if (potometer>=255 && potometer<512)
  {
    for (int i=2; i<=4; i++)
    {
      digitalWrite(i, HIGH);
    }
    digitalWrite(5, LOW);
  }
  else
  {
    for (int i=2; i<=5; i++)
    {
      digitalWrite(i, HIGH);
    }
  }
}
