void setup() {
  pinMode(18, OUTPUT);
}

void loop() {
    digitalWrite(18, HIGH); // Turn on LED
    delay(500); // Wait for 500 milliseconds
    digitalWrite(18, LOW); // Turn off LED
    delay(500); // Wait for 500 milliseconds
}
