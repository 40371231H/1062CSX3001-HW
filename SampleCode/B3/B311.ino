int num = 0;   
void setup()
{
  Serial.begin(9600);     
}
void loop() 
{
 if (Serial.available() > 0) 
 {
    num = Serial.read();
    Serial.print("I received: ");
    Serial.println(num, DEC);
  }
}

