const int trigPin = 9;  // Trigger pin for sending pulses
const int pulseFrequency = 20000; // Frequency in Hz (20 kHz)
const int pulseCount = 100; // Number of pulses to emit
const int delayBetweenPulses = 25; // Delay between individual pulses in microseconds
const int pauseBetweenSequences = 1000; // Pause between sequences in milliseconds

void setup() {
  pinMode(trigPin, OUTPUT); // Set the trigger pin as an OUTPUT
  Serial.begin(9600);       // Initialize serial communication for debugging (if needed)
}

void loop() {
  // Calculate the period and pulse duration based on frequency
  unsigned long period = 1000000 / pulseFrequency; // Period in microseconds
  unsigned long pulseDuration = period / 2; // Duration of each pulse

  // Generate pulse train
  for (int i = 0; i < pulseCount; i++) { // Send pulseCount pulses
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(pulseDuration);
    digitalWrite(trigPin, LOW);
    delayMicroseconds(pulseDuration);
  }

  // Wait for a pause between sequences
  delay(pauseBetweenSequences);
}
