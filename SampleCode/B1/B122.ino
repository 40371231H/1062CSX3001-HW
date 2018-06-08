const int sw=2;		
const int led[]={10,11,12,13};	
int i;					
int j=0;				
int val;				
void setup() 
{   
  pinMode(sw,INPUT_PULLUP); 
  for(i=0;i<4;i++)	
  {
    pinMode(led[i],OUTPUT);	
  }  
}
void loop() 
{
  val=digitalRead(sw);	
  for(i=0;i<4;i++)	
  {	
    digitalWrite(led[i],LOW);	
  }  	
  if(val==HIGH)		
  {
    digitalWrite(led[j],HIGH); 
    delay(500); 					
    if(j==3)					
      j=0;
    else
      j=j+1;  					
  }  
  else					
  {
    digitalWrite(led[j],HIGH); 
    delay(500); 								
    if(j==0)					
       j=3;
    else
      j=j-1;  				
  }       
}

