const int speaker=2;
const int toneTable[8]={523,587,659,694,784,880,988,1046};
void setup() 
{}   
void loop() 
{
  for(int i=0;i<8;i++)
  {
    tone(speaker,toneTable[i]);
    delay(500); 
  } 
  noTone(speaker);
}

