#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  lcd.init();
  lcd.backlight();
  
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("WE DONT DIE WE MULTIPLY OH OH, SAKSAK PATALIKOD SAKSAK PATALIKOD");
//  lcd.setCursor(0,1);
//  lcd.print("WE MULTIPLY");
}
