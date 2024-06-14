/*
    Project name : LED Dimmer
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-led-dimmer
*/

// Define the pin number where the LED is connected
const int ledPin = 9;      // PWM pin for LED control
const int potPin = A0;     // Potentiometer analog input pin

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the analog value from the potentiometer
  int potValue = analogRead(potPin);

  // Map the potentiometer value (0-1023) to PWM range (0-255)
  int brightness = map(potValue, 0, 1023, 0, 255);

  // Set the LED brightness using PWM
  analogWrite(ledPin, brightness);
  
  // Optional: Print the brightness value to Serial Monitor for debugging
  // Serial.print("Brightness: ");
  // Serial.println(brightness);

  delay(10);  // Small delay for stability
}
