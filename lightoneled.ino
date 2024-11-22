// Pin configuration
int ledPin = 13; // The pin where the LED is connected (default pin 13 on many Arduino boards)

void setup() {
  // Set the LED pin as an OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);

  // Keep the LED on for 1 second (1000 milliseconds)
  delay(1000);

  // Turn the LED off
  digitalWrite(ledPin, LOW);

  // Keep the LED off for 1 second
  delay(1000);
}
