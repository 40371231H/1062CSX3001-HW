/*
 * attachInterrupt.pde: attachInterrupt() 與外部中斷
 */
const int ledPin = 13;                   // LED
volatile int letStatus = LOW;
 
void setup() {
  pinMode(ledPin, OUTPUT);               // 把 ledPin 設置成 OUTPUT
  attachInterrupt(0, buttonStateChanged, CHANGE);
} 
void loop() {
    digitalWrite(ledPin, letStatus);
    delay(10000);                       // delay一個很長的時間模擬程式執行
}
void buttonStateChanged() {
  letStatus = ~letStatus;               // 把 led 的狀態反過來
  digitalWrite(ledPin, letStatus);
}


