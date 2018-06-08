#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10 ,5 , 4, 3, 2);
int pos = 0;

void setup() {
  pinMode(9, INPUT);
  lcd.begin(16, 2);
  
}

void loop() {
  if(digitalRead(9)==HIGH){
    while(pos<7){
      lcd.setCursor(pos, 0);
      lcd.print("I Love You");
      delay(200);
      lcd.clear();
      pos++;
    }  }
  }