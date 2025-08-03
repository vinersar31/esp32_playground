#define LED_BUILTINT 2

void setup() {
  pinMode(LED_BUILTINT, OUTPUT);

}

void loop() {
  digitalWrite(LED_BUILTINT, HIGH);
  delay(500);
  digitalWrite(LED_BUILTINT, LOW);
  delay(500);
}
