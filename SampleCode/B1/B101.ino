int led[] = {10,11,12,13};
int i;
int j=0;
void setup() {    
  for(i=0;i<4;i++)
  {  
    pinMode(led[i], OUTPUT); 
  }    
}

void loop() {
  for(i=0;i<4;i++)
  {
    digitalWrite(led[i],LOW);
  }  
  digitalWrite(led[j], HIGH); 
  delay(1000); 
  j++;
  if(j==4)
    j=0;
}
