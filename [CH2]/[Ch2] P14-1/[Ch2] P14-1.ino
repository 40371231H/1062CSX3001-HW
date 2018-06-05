//設計 Arduino 程式，控制一個 LED 閃爍，0.5 秒亮、0.5 秒暗。

void setup()
{
    pinMode(13, OUTPUT);
}

void loop()
{
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
}