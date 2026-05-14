# Switch Logic LED Control using Arduino UNO

## 📌 Description
Two push buttons controlling two LEDs using
Negative and Positive Logic on Arduino UNO.

## ⚡Negative Logic Switch - Positive LED Glow

### Working
- Switch Pressed -> LOW
- LED -> ON

### Connection
- Switch between Pin 2 and GND
- INPUT_PULLUP used

---

## ⚡Positive Logic Switch - Negative LED Glow

### Working
- Switch Pressed -> HIGH
- LED -> OFF

### Connection
- Switch between 5V and Pin 4
- 10k pull-down resistor connected to GND

---

## 🔧Components 
- Arduino UNO
- Push Buttons
- LEDs
- 220Ω Resistors
- 10kΩ Resistor
- Jumper Wires

---

## 🖥️ Simulation
🔗 [View on Wokwi][https://wokwi.com/projects/463975902226529281]

## 📚 Concepts Used
- INPUT_PULLUP (Negative Logic)
- External Pull-down Resistor (Positive Logic)
- digitalWrite / digitalRead
- Wokwi Simulator
- Arduino IDE
