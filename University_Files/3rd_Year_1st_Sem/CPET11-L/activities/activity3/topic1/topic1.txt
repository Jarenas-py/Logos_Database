#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  lcd.init();
  lcd.clear();
  lcd.backlight();

  lcd.setCursor(5, 0);
  lcd.print("Ako si");

  lcd.setCursor(2, 1);
  lcd.print("Joseph Arenas");
}

void loop(){
}