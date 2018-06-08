int sw = 2;
int leftLED = 9 ;
int midLED = 10;
int rightLED = 11;

int longTIME = 1000;
int shortTIME = 500;

int val;

void flashOnce(int, int, int);

void setup()
{
  pinMode(sw, INPUT);
  digitalWrite(sw,HIGH);
  pinMode(leftLED, OUTPUT);
  pinMode(midLED, OUTPUT);
  pinMode(rightLED, OUTPUT);
}

void loop()
{
  val = digitalRead(2);
  if(val == LOW){
  	flashOnce(leftLED, shortTIME, 5);
  	flashOnce(midLED, longTIME, 2);
  	flashOnce(rightLED, shortTIME, 1);
  	Serial.println('I love you');
  }else{
	flashOnce(leftLED, shortTIME, 1);
  	flashOnce(midLED, longTIME, 2);
  	flashOnce(rightLED, shortTIME, 5);
  	Serial.println('You love I');  
  }
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