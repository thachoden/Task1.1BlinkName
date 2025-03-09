void setup() {
  
    pinMode(LED_BUILTIN, OUTPUT);
}
void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(900);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}
void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}
void gap() {
  delay(600);
}
void loop() {

  // Letter T (-)
  dash();
  gap();
  // Letter H (....)
  for (int i = 0; i < 4; i++) {
    dot();
  }
  gap();

  // Letter A (.-)
  dot();
  dash();
  gap();
  // Letter C (-.-.)
  dash();
  dot();
  dash();
  dot();
  delay(2100); // End of word gap (7 times dot length)
}
  


