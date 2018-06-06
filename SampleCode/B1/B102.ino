const int led[]={10,11,12,13};	
int i;					
int j=0;				
int direct=0;			
void setup() 
{    
  	for(i=0;i<4;i++)
    		pinMode(led[i],OUTPUT); 	
}
void loop() 
{
  	for(i=0;i<4;i++)
  	{
    		digitalWrite(led[i],LOW);	
  	}  
  	digitalWrite(led[j],HIGH); 	
  	delay(500);
  	if(direct==0)	
  	{
     	if(j==3)		
       		direct=1;	
     	else			
       		j=j+1;         	
  	}
  	else				
  	{
     	if(j==0)			
       		direct=0;	
     	else				
       		j=j-1;   	
  }
}

