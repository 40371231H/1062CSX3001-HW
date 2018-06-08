int leftLED = 9 ;
int midLED = 10;
int rightLED = 11;
int longTIME = 1000;
int shortTIME = 500;

void flashOnce(int, int, int);

void setup()
{
  pinMode(leftLED, OUTPUT);
  pinMode(midLED, OUTPUT);
  pinMode(rightLED, OUTPUT);
}

void loop()
{
  flashOnce(leftLED, shortTIME, 5);
  flashOnce(midLED, longTIME, 2);
  flashOnce(rightLED, shortTIME, 1);

}

void flashOnce(int ledPIN, int lightTIME, int flashTIME)
{
  while(flashTIME)
  {
    digitalWrite(ledPIN, HIGH);
    delay(lightTIME);
    digitalWrite(ledPIN, LOW);
    delay(lightTIME);
    flashTIME--;
  }
}
