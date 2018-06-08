int led[] ={10,11,12,13};
int i=0,j;
void setup() 
{                
  Serial.begin(9600);
  for(int i=0;i<4;i++)
  {
    pinMode(led[i],OUTPUT); 
  }    
}
void loop() 
{
  Serial.print("LED=");    
  for(j=0;j<4;j++)
  {
    if(j==i)
      Serial.print("1");
    else 
      Serial.print("0");  
  }
  Serial.println();  
  digitalWrite(led[i],HIGH);
  delay(1000);
  digitalWrite(led[i],LOW);
  i++;
  if(i>3)
    i=0;       
}
