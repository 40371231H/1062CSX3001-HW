int val;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  val = analogRead(A0);
  if (val < 512) {
    tone(4, 1976,500); 
    delay(500);
    noTone(4);
    delay(500);
  }else{
    noTone(4);
    delay(1000);
    digitalWrite(1,HIGH);
    delay(1000);
    digitalWrite(1,LOW);
  }
}