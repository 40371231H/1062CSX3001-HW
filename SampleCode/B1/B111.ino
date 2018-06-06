int led = 10;           
int brightness = 0;    
int lighten = 5;    
void setup()  
{ 
} 
void loop()  
{ 
    analogWrite(led,brightness);    
    if(brightness<=250)     
      brightness = brightness + lighten;
    else
      brightness=0;
    delay(50);      
}
