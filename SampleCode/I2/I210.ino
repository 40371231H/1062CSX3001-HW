const int lm35Vout=0;
const int led=13; 				
void setup() 
{ 
  Serial.begin(9600);			
  pinMode(led,OUTPUT);			
  digitalWrite(led,LOW);		
}
void loop() 
{
  long degree;					
  degree=lm35(lm35Vout);				
  Serial.print("degrees Celsius = ");	
  Serial.print(degree);	
  Serial.println("C");	
  if(degree>=30)					
    digitalWrite(led,HIGH);		
  else								
    digitalWrite(led,LOW);  		
  delay(1000);					
}
long lm35(int lm35Vout)
{
  int value;					
  long degree;  				
  value=analogRead(lm35Vout);		
  degree=(long)value*500/1024;		
  return degree;				
}  

