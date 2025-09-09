void setup() {
  // put your setup code here, to run once:
  // pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(115200); // 設定串口鮑率
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(LED_BUILTIN, HIGH);
  // delay(1000);
  // digitalWrite(LED_BUILTIN, LOW);
  // delay(500);
  // digitalWrite(LED_BUILTIN, HIGH);
  // delay(500);
  // digitalWrite(LED_BUILTIN, LOW);
  // delay(1000);

  Serial.println("Hello computer"); // 要發送的文字
  delay(500);
}
