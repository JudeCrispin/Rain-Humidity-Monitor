# 🌧️ Arduino-Based Rain & Humidity Monitoring System

A smart weather monitoring system that measures **humidity levels** and detects **rainfall** in real time using Arduino.

This project integrates:

* **Arduino Uno** – Main controller
* **DHT11 Humidity Sensor** – Humidity measurement
* **Rain Sensor Module** – Rain detection
* **16x2 I2C LCD Display** – Status display
* **SG90 Servo Motor** – Automatic movement on rain detection
* **Buzzer** – Audible alert

---

# 📌 Features

* 🌡️ Real-time humidity monitoring
* 🌧️ Rain detection system
* 📟 Live status display on LCD
* 🔄 Automatic servo motor rotation when rain is detected
* 🔔 Buzzer alert during rainfall
* ⚡ Low-cost and easy-to-build design
* 🔌 Suitable for IoT and automation projects

---

# 🛠️ Hardware Requirements

## Components Used

* Arduino Uno
* DHT11 Humidity Sensor
* Rain Sensor Module
* SG90 Servo Motor
* 16x2 LCD with I2C Module
* Active Buzzer
* Breadboard
* Jumper Wires
* USB Cable

---

# ⚙️ Working Principle

The DHT11 sensor continuously measures the surrounding humidity level.

The rain sensor monitors the presence of water droplets.

### When No Rain is Detected

* LCD displays humidity value
* LCD displays **"NOT RAINING"**
* Servo remains at **0°**
* Buzzer remains OFF

### When Rain is Detected

* LCD displays humidity value
* LCD displays **"RAINING"**
* Servo rotates to **90°**
* Buzzer turns ON

This mechanism can be extended for applications such as:

* Automatic window closing
* Smart clothesline protection
* Weather monitoring stations
* Agricultural automation

---

# 🔌 Circuit Connections

## DHT11 Sensor

| DHT11 Pin | Arduino Pin |
| --------- | ----------- |
| VCC       | 5V          |
| GND       | GND         |
| DATA      | D2          |

---

## Rain Sensor Module

| Rain Sensor Pin | Arduino Pin |
| --------------- | ----------- |
| VCC             | 5V          |
| GND             | GND         |
| DO              | D3          |

---

## SG90 Servo Motor

| Servo Pin | Arduino Pin |
| --------- | ----------- |
| VCC       | 5V          |
| GND       | GND         |
| Signal    | D9          |

---

## Buzzer

| Buzzer Pin | Arduino Pin |
| ---------- | ----------- |
| Positive   | D8          |
| Negative   | GND         |

---

## I2C LCD Display

| LCD Pin | Arduino Pin |
| ------- | ----------- |
| VCC     | 5V          |
| GND     | GND         |
| SDA     | A4          |
| SCL     | A5          |

---

# 📂 Project Structure

```text
Rain-Humidity-Monitor/
│
├── Arduino_Code/
│   └── RainHumidityMonitor.ino
│
├── Circuit_Diagram/
│   └── circuit_diagram.png
│
├── Images/
│   ├── hardware_setup.jpg
│   ├── raining_output.jpg
│   └── not_raining_output.jpg
│
├── README.md
└── LICENSE
```

---

# 📟 LCD Output

## Normal Condition

```text
HUMIDITY:65.20%
NOT RAINING
```

---

## Rain Detected

```text
HUMIDITY:65.20%
RAINING
```

---

# ▶️ How to Run the Project

## Step 1 — Install Arduino IDE

Download and install Arduino IDE.

---

## Step 2 — Install Required Libraries

Open:

```text
Sketch → Include Library → Manage Libraries
```

Install:

* DHT Sensor Library
* Adafruit Unified Sensor
* LiquidCrystal_I2C
* Servo Library

---

## Step 3 — Connect Components

Connect all components according to the circuit diagram.

---

## Step 4 — Upload the Code

1. Select the correct Arduino board.
2. Select the COM port.
3. Upload the sketch.

---

## Step 5 — Test the System

* Observe humidity readings on the LCD.
* Sprinkle water on the rain sensor.
* Verify:

  * LCD shows "RAINING"
  * Servo rotates to 90°
  * Buzzer activates

---

# 🧠 System Flow

1. Read humidity from DHT11 sensor.
2. Read rain sensor status.
3. Display humidity on LCD.
4. Determine rain condition.
5. Update LCD status.
6. Rotate servo accordingly.
7. Activate/deactivate buzzer.

---

# 📸 Project Demonstration

## Hardware Setup

(Add image here)

---

## Rain Detected

(Add image here)

---

## LCD Display Output

(Add image here)

---

# 🚀 Future Enhancements

* ESP8266/ESP32 Wi-Fi integration
* Mobile app monitoring
* Cloud data logging
* Weather prediction analytics
* Automatic roof/window control
* Telegram notifications
* ThingSpeak dashboard integration

---

# 🎓 Educational Applications

This project helps students learn:

* Embedded Systems
* Sensor Interfacing
* Arduino Programming
* Servo Motor Control
* LCD Communication
* Smart Automation Systems

---

# 📜 License

This project is intended for educational, academic, and research purposes.

---

⭐ If you find this project useful, please consider starring the repository.
