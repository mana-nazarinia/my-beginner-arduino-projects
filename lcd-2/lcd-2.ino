#include <Wire.h>
#include <LiquidCrystal_I2C.h>

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  pinMode (9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button = digitalRead(9);
  int count = 10;
  lcd.setCursor(0, 7);
  lcd.print(count);
  if (button == 0)
  {
    lcd.clear();
    for (count=9; count >=0; count--)
    { 
      lcd.setCursor(0, 7);
      lcd.print(count);
      delay(1000);

      while (count==0)
      {
        lcd.noBacklight();
        button =digitalRead(9);
        if (button == 1)
        {
          Count = 10;
          lcd.backlight();
        }
      }
    }
  }
}
