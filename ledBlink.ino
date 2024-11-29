const int pinLed = 2; // Initialize default led in ESP32

void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
  digitalWrite(pinLed, HIGH);
  delay(1000); // Delay 1 second.
  digitalWrite(pinLed, LOW);
  delay(1000);
  
}
