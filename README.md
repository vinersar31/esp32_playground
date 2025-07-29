# 🚀 ESP32 Playground

Welcome to the **ESP32 Playground** – a fun and flexible environment for experimenting with the ESP32 microcontroller and learning how to control electronics like LEDs, sensors, and more!

---

## 🔧 What You'll Need

- 🧠 **ESP32 Board** (e.g., ESP32 DevKit v1)
- 🖥️ **Computer with USB Port**
- 🔌 **Micro-USB Cable**
- 💡 **Basic Components**:
  - LEDs + resistors
  - Breadboard + jumper wires
  - Sensors (e.g., DHT11, PIR, etc.)
  - Buttons, buzzers, etc.

---

## 🛠️ Software Setup

1. **Install [Arduino IDE](https://www.arduino.cc/en/software)**
2. **Add ESP32 Board Support**  
   In Arduino IDE:
   - Go to **File > Preferences**
   - Add the following URL to *Additional Board Manager URLs*:
     ```
     https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
     ```
   - Go to **Tools > Board > Boards Manager** and search for `esp32`  
     Install the board package by **Espressif Systems**
3. **Select Your Board and Port**
   - Tools > Board > `ESP32 Dev Module`
   - Tools > Port > Select the correct COM port

---

## 📁 Project Structure

```
esp32-playground/
├── src/                 # Main source code (.ino or .cpp/.h files)
│   └── blink.ino        # Basic LED blink example
├── scripts/             # Helper scripts (e.g., flashing, monitoring, automation)
├── doc/                 # Documentation (diagrams, schematics, notes, PDFs)
├── tests/               # Test sketches or unit/integration tests
```

---

## ✅ Goals of This Playground

- Learn and experiment safely
- Rapidly prototype with ESP32
- Build and test microcontroller projects
- Have fun with embedded programming!

---

Happy hacking! ⚡
