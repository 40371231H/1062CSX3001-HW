const int refVolts=5;
int val;
float volts;
void setup() 
{ 
  Serial.begin(9600);
}
void loop() 
{
  val=analogRead(0);
  volts=(float)val*refVolts/1024;  
  Serial.print("voltage=");
  Serial.print(volts,2);
  Serial.println("V");
  delay(1000);
}  
