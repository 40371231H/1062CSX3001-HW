const int led=13;		
const int PIRout=2;		
void setup() 
{ 
  pinMode(led,OUTPUT);		
  pinMode(PIRout,INPUT);		
}
void loop() 
{
  int val=digitalRead(PIRout);		
  if(val==HIGH)		
  {
  	digitalWrite(led,HIGH);		
  	delay(50);
  	digitalWrite(led,LOW);
  	delay(50);    
  }
  else					
  {
  	digitalWrite(led,LOW);		
  }  
}  

