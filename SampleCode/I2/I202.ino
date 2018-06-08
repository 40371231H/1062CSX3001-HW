#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,5,4,3,2);
void setup() 
{
   lcd.begin(16,2);    
}   
void loop() 
{
  lcd.setCursor(10,0);
  lcd.print("hello!"); 
  for(int i=0;i<10;i++)
  {
    lcd.scrollDisplayLeft(); 
    delay(200);
  } 
 for(int i=0;i<10;i++)
 {
   lcd.scrollDisplayRight();
   delay(200);   
 }  
}
