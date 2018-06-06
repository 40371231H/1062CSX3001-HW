int i;
int num;
int led[]={10,11,12,13};
int status[]={0,0,0,0};
void setup()
{
  Serial.begin(9600); 
  Serial.println("press 0~3 toggle LED status");
  for(i=0;i<4;i++)
      pinMode(led[i],OUTPUT);
  for(i=0;i<4;i++)
      digitalWrite(led[i],LOW);      
}
void loop() 
{
  if (Serial.available()>0) 
  {
      num = Serial.read();
      num=num-'0';
      if(num>=0 && num<=3)
      {
        status[num]=!status[num];
        digitalWrite(led[num],status[num]); 
        Serial.print("LED status : ");    
        for(i=0;i<4;i++)
        {
          if(status[i]==1)
            Serial.print("1");
          else
            Serial.print("0");
        }    
        Serial.println(); 
      }  
  }    
}

