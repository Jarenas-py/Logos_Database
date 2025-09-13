#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DS1302.h>

// LCD (20x4, I2C address 0x27)
LiquidCrystal_I2C lcd(0x27, 20, 4);

// DS1302 pins
const int kCePin   = 4;   // RST
const int kIoPin   = 5;   // DAT
const int kSclkPin = 6;   // CLK
DS1302 rtc(kCePin, kIoPin, kSclkPin);

// Alarm pins
const int buttonHour   = 2;
const int buttonMinute = 3;
const int relayPin     = 7;   // Relay input pin
const int ledPin       = 8;   // Red LED indicator

// Alarm variables
int alarmHour = 0;
int alarmMinute = 0;
bool alarmTriggered = false;
unsigned long alarmStartMillis = 0;
const unsigned long buzzerDuration = 5000; // 5 seconds

void setup() {
  pinMode(buttonHour, INPUT);
  pinMode(buttonMinute, INPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(relayPin, HIGH); // relay OFF (assuming active LOW)
  digitalWrite(ledPin, LOW);

  lcd.init();
  lcd.backlight();
}

void loop() {
  Time t = rtc.time();

  // Show time on LCD
  lcd.setCursor(0, 0);
  lcd.print("Date: ");
  lcd.print(t.yr);
  lcd.print("-");
  lcd.print(t.mon);
  lcd.print("-");
  lcd.print(t.date);

  lcd.setCursor(0, 1);
  lcd.print("Time: ");
  lcd.print(t.hr);
  lcd.print(":");
  lcd.print(t.min);
  lcd.print(":");
  lcd.print(t.sec);

  // Handle button presses
  if (digitalRead(buttonHour) == HIGH) {
    alarmHour = (alarmHour + 1) % 24;
    delay(200);
  }
  if (digitalRead(buttonMinute) == HIGH) {
    alarmMinute = (alarmMinute + 1) % 60;
    delay(200);
  }

  // Show alarm time on 3rd line
  lcd.setCursor(0, 2);
  lcd.print("Alarm: ");
  lcd.print(alarmHour);
  lcd.print(":");
  lcd.print(alarmMinute);

  // Check alarm condition
  if (!alarmTriggered && t.hr == alarmHour && t.min == alarmMinute && t.sec == 0) {
    alarmTriggered = true;
    alarmStartMillis = millis();
    digitalWrite(relayPin, LOW);  // Relay ON (buzzer ON, NC closes)
    digitalWrite(ledPin, HIGH);   // LED ON permanently
  }

  // Stop buzzer after 5 seconds
  if (alarmTriggered && (millis() - alarmStartMillis >= buzzerDuration)) {
    digitalWrite(relayPin, HIGH); // Relay OFF (buzzer OFF, back to NO)
    // LED stays ON as indicator
  }
}
