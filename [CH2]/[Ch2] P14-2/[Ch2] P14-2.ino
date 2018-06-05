//設計 Arduino 程式，控制兩個 LED 交替閃爍，0.5 秒亮、0.5 秒暗。

void setup()
{
    pinMode(13, OUTPUT);
}

void loop()
{
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(500);
}