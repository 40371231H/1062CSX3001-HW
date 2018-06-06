const int cds=0;
const int led=2;
int val;
float volts;
void setup() 
{ 
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
}
void loop() 
{
  val=analogRead(cds);
  if(val>512)
     digitalWrite(led,LOW);
  else
     digitalWrite(led,HIGH); 
}  
