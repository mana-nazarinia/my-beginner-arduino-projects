#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int buttonPin = 9;
const int startCount = 10;

void setup() 
{
  lcd.init();
  lcd.backlight();

  pinMode(buttonPin, INPUT_PULLUP); 
}

void loop() 
{
  int button = digitalRead(buttonPin);
  int count = startCount;

  
  lcd.setCursor(0, 0);
  lcd.print("Count: ");
  lcd.print(count);
  delay(1000);

 
  if (button == LOW) 
  {
    lcd.clear();

    while (digitalRead(buttonPin) == LOW) { 
      for (count = startCount; count >= 0; count--) 
      {

        if (digitalRead(buttonPin) == HIGH) {
          lcd.clear();
          lcd.backlight();
          return; 
        }

        lcd.setCursor(0, 0);
        lcd.print("Count: ");
        lcd.print("   ");      
        lcd.setCursor(7, 0);
        lcd.print(count);

        delay(1000);

        if (count == 0) 
        {
          lcd.noBacklight();
          break;
        }
      }
    }
  }
}

