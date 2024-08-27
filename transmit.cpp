const int trigPin = 9;  // Pin for generating the tone
const int pulseFrequency = 20000; // Frequency in Hz (20 kHz)
const int pulseDuration = 100; // Duration of each tone in milliseconds

void setup() {
  pinMode(trigPin, OUTPUT); // Set the pin as an OUTPUT
  Serial.begin(9600);       // Initialize serial communication for debugging (if needed)
}

void loop() {
  tone(trigPin, pulseFrequency); // Generate a 20 kHz tone
  delay(pulseDuration); // Wait for the duration of the tone
  noTone(trigPin); // Stop the tone
  delay(1000); // Wait for 1 second before generating the next tone
}
