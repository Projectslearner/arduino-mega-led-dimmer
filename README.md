# LED Dimmer

#### Project Overview

The LED Dimmer project demonstrates how to control the brightness of an LED using a potentiometer and Arduino Mega. By reading the analog input from the potentiometer, which acts as a voltage divider, the Arduino converts this analog signal into a corresponding PWM (Pulse Width Modulation) signal to adjust the LED's brightness. This project allows users to interactively dim or brighten an LED based on the potentiometer's position.

#### Components Needed

- **Arduino Mega**
- **LED (any color)**
- **220-ohm resistor (for LED protection)**
- **Potentiometer (10k ohm)**
- **Jumper Wires**

#### Block Diagram


#### Circuit Setup

1. **Connect the LED and Potentiometer to Arduino Mega:**
   - **LED Anode (Longer Leg)**: Connect to digital pin 9 (PWM pin)
   - **LED Cathode (Shorter Leg)**: Connect to GND through a 220-ohm resistor
   - **Potentiometer Pin Configuration**:
     - One pin to 5V (VCC)
     - One pin to GND
     - Middle pin (wiper) to analog pin A0 on Arduino Mega

#### Instructions

1. **Circuit Setup:**
   - Wire the LED and resistor as per the connection diagram provided.
   - Connect the potentiometer to provide analog input to the Arduino.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Mega.
   - Adjust the potentiometer knob to vary the LED brightness.
   - Observe how changing the potentiometer's position changes the brightness of the LED.

#### Applications

- **Mood Lighting:** Adjust LED brightness for ambient lighting effects.
- **Energy Efficiency:** Dim LEDs to save power in battery-operated devices.
- **Visual Feedback:** Use varying brightness levels to indicate different states or conditions.

#### Notes

- **PWM Control:** Arduino's `analogWrite()` function is used to control the LED's brightness through PWM.
- **Potentiometer Calibration:** Ensure the potentiometer is connected correctly to provide a smooth range of analog values.
- **Serial Monitoring (Optional):** Uncomment the Serial commands in the code to monitor the brightness values on the Serial Monitor for debugging or analysis.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-mega-led-dimmer)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner