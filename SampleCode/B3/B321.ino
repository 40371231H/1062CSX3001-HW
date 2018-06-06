int num=0;				
int flash=100;			
int led=13;				
void setup()
{
  Serial.begin(9600); 		
  pinMode(led,OUTPUT);    		
}
void loop() 
{
  if (Serial.available()>0) 		
  {
      num = Serial.read();		
      num=num-'0';		
      if(num>=0 && num<=9)		
      {
        if(num==0)		
          	flash=1000;		
        else  		
          	flash=num*100;		
      }    
  }
  digitalWrite(led,HIGH);		
  delay(flash);		
  digitalWrite(led,LOW);		
  delay(flash);			
}

