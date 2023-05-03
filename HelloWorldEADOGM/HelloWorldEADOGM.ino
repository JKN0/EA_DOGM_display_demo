// Simple demo for FF-Automation LCD display

// Modified from https://github.com/matmunk/LiquidCrystal_74HC595

#include "LiquidCrystal_74HC595.h"

// Arduino pins
#define DS 11
#define SHCP 13
#define STCP 12

// Shift register positions
#define RS 5
#define E 4
#define D4 0
#define D5 1
#define D6 2
#define D7 3

LiquidCrystal_74HC595 lcd(DS, SHCP, STCP, RS, E, D4, D5, D6, D7);

void setup() {
  lcd.begin(16, 2);
  lcd.backlight(1);
  lcd.print("Hello, World!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
  delay(1000);
}
