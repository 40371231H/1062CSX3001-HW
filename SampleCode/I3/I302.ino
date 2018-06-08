const int led=2;
int val;
float volts;
void setup() 
{ 
  pinMode(led,OUTPUT);
  digitalWrite(led,HIGH);
}
void loop() 
{
  val=analogRead(0);
  val=map(val,0,1023,1000,100);
  digitalWrite(led,HIGH);
  delay(val);
  digitalWrite(led,LOW);
  delay(val);
}  
