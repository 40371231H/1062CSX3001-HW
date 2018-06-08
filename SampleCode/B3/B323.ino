int i;
int key;
int temp;
int led[]={10,11,12,13};
int status[]={1,0,0,0};
void setup()
{
  Serial.begin(9600); 
  Serial.println("press R : LED shift right");
  Serial.println("press L : LED shift left");
  for(i=0;i<4;i++)
      pinMode(led[i],OUTPUT); 
}
void loop() 
{
  if (Serial.available()>0) 
     key = Serial.read(); 
  if(key=='R' || key=='r')
  {
    temp=status[3];
    for(i=2;i>=0;i--)
      status[i+1]=status[i];
    status[0]=temp;  
    display();
  }
  else if(key=='L' || key=='l')
  {
    temp=status[0];
    for(i=0;i<3;i++)
      status[i]=status[i+1];
    status[3]=temp;  
    display();
  }  
}
void display()
{
  for(int i=0;i<4;i++)
  {
    if(status[i]==1)
      digitalWrite(led[i],HIGH);
    else
      digitalWrite(led[i],LOW);       
  }
  delay(200);
} 
