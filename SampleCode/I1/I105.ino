const int speaker=2;
const int sw=4;
const int debounce=20;
char toneName[]="CDEFGAB";
unsigned int frequency[7]={523,587,659,694,784,880,988};
char beeTone[]="GEEFDDCDEFGGGGEEFDDCEGGEDDDDDEFEEEEEFGGEEFDDCEGGC";
char starTone[]="CCGGAAGFFEEDDCGGFFEEDGGFFEEDCCGGAAGFFEEDDC";
byte beeBeat[]={1,1,2,1,1,2,1,1,1,1,1,1,2,
              1,1,2,1,1,2,1,1,1,1,4,
              1,1,1,1,1,1,2,1,1,1,1,1,1,2,
              1,1,2,1,1,2,1,1,1,1,4}; 
byte starBeat[]={1,1,1,1,1,1,2,1,1,1,1,1,1,2,
              1,1,1,1,1,1,2,1,1,1,1,1,1,2,
              1,1,1,1,1,1,2,1,1,1,1,1,1,2};
unsigned long tempo=180;                
const int beeLen=sizeof(beeTone);
const int starLen=sizeof(starTone);
int len=0;
int num;
int keyVal=0;
void setup() 
{
    pinMode(sw,INPUT_PULLUP); 
}   
void loop() 
{
  if(digitalRead(sw)==0)
  {
    delay(debounce);
    while(digitalRead(sw)==0)
      ;
    keyVal++;
    if(keyVal>2)
      keyVal=0;
    num=0;
    if(keyVal==1)
      len=beeLen;
    else if(keyVal==2)
      len=starLen;
  }   
  if(keyVal==1 && len>0)
  {
    playTone(beeTone[num],beeBeat[num]); 
    num++;
    len--;
  }   
  else if(keyVal==2 && len>0) 
  {
    playTone(starTone[num],starBeat[num]); 
    num++;
    len--;
  }   
}
void playTone(char toneNo,byte beatNo)
{
  unsigned long duration=beatNo*60000/tempo;
  int i;
  for(i=0;i<7;i++)
  {
    if(toneNo==toneName[i])
    {
      tone(speaker,frequency[i]);
      delay(duration);
      noTone(speaker);
    } 
  } 
} 
