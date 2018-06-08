#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,5,4,3,2);
int counts=0;
void setup() 
{
  lcd.begin(16,2); 
  lcd.setCursor(0,0);
  lcd.print("up counter");  
}   
void loop() 
{
  lcd.setCursor(0,1);
  if(counts<10)
    lcd.print("0"); 
  lcd.print(counts);  
  delay(1000);
  counts++;
  if(counts==100)
     counts=0; 
}

