#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,5,4,3,2);
void setup() 
{
   lcd.begin(16,2);
   lcd.print("hello!");   
}   
void loop() 
{ }

