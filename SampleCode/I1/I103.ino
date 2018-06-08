const int speaker=2;
const int sw[8]={4,5,6,7,8,9,10,11};
const int frequency[8]={523,587,659,694,784,880,988,1046};
int i;
int val;
void setup() 
{
  for(i=0;i<8;i++)
    pinMode(sw[i],INPUT_PULLUP);
}   
void loop() 
{
  for(i=0;i<8;i++)
  {
    val=digitalRead(sw[i]);
    if(val==0)
      tone(speaker,frequency[i],100);
  }  
}

