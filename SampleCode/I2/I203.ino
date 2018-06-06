#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,5,4,3,2);
int i;
int key[16];
int num=0;
void setup() 
{
  Serial.begin(9600);  
  lcd.begin(16,2);
  lcd.write("0123456789");
  lcd.setCursor(0,1);
}   
void loop() 
{
  if(Serial.available())
  {
     key[num]=Serial.read();
     if(key[num]=='-')
     {
       lcd.setCursor(0,1);
       for(i=0;i<16;i++)
       {
         lcd.write(' ');
         key[i]=' '; 
       }  
       lcd.setCursor(0,1);
       num=0;
     }
     else
     {
       lcd.write(key[num]);    
       num++;     
       if(num>15)
       {
         lcd.setCursor(0,1);
         num=0;
       }        
     }  
  } 
}
