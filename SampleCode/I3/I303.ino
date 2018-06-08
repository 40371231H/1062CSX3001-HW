const int led[10]={2,3,4,5,6,7,8,9,10,11};
int i;
int val;
void setup() 
{ 
  for(i=0;i<10;i++)
    pinMode(led[i],OUTPUT);
}
void loop() 
{
  val=analogRead(0);
  val=map(val,0,1023,0,9);
  for(i=0;i<=val;i++)
    digitalWrite(led[i],HIGH); 
  for(i=val+1;i<10;i++)
    digitalWrite(led[i],LOW);
}  
