#include <Wire.h>
//#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0X27, 16, 2);
void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int count=10; count<=1; count--)
  {
    lcd.setCursor(1,6);
    lcd.print(count);
    delay(1000);
    if (count == 10)
    {
      lcd.clear();
    }
  }
}
