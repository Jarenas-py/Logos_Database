#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(DHTPIN, DHTTYPE);

void setup(){
  lcd.init();
  lcd.backlight();
  dht.begin();
}

void loop(){
  float humi = dht.readHumidity();
  float temp = dht.readTemperature();

  lcd.setCursor(0, 0);
  lcd.print("humi: ");
  lcd.print(humi);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("temp: ");
  lcd.print(temp);
  lcd.print("C");
  delay(1000);
}
