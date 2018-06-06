#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,5,4,3,2);
const byte degree=25;
const byte degreeSymbol=B11011111;
void setup() 
{
  lcd.begin(16,2); 

}   
void loop() 
{
  lcd.setCursor(0,0);
  lcd.print(degree);
  lcd.write(degreeSymbol);  
  lcd.print("C"); 
}
