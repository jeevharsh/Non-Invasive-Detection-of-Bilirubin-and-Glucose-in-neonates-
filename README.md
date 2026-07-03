# Non-Invasive-Detection-of-Bilirubin-and-Glucose-in-neonates-
A non-invasive biomedical device for estimating bilirubin and glucose levels using multi-wavelength optical sensing, BPW34 photodiode, transimpedance amplification, and ESP32. The system applies the Modified Beer-Lambert Law and signal processing to provide real-time measurements.

# 🩺 Non-Invasive Bilirubin and Glucose Detection System

A low-cost, portable, non-invasive biomedical device that estimates **bilirubin** and **glucose** levels using optical sensing technology. The system employs multi-wavelength LEDs, a BPW34 photodiode, signal conditioning circuits, and the **ESP32's built-in Analog-to-Digital Converter (ADC)** to analyze tissue light absorption based on the **Modified Beer-Lambert Law**.

---

## 📌 Table of Contents

- Overview
- Features
- System Architecture
- Hardware Components
- Software Requirements
- Working Principle
- Circuit Description
- Project Structure
- Installation
- Usage
- Applications
- Future Enhancements
- Results
- Contributors
- License

---

# 📖 Overview

Monitoring blood glucose and bilirubin levels is essential for diagnosing diabetes and neonatal jaundice. Conventional methods require invasive blood sampling, which can be painful, costly, and inconvenient.

This project presents a **non-invasive optical sensing device** that estimates these biomarkers by analyzing the absorption of different wavelengths of light passing through human tissue. The system processes optical signals using an ESP32 microcontroller and displays the estimated values in real time.

---

# ✨ Features

- 🔹 Non-invasive bilirubin estimation
- 🔹 Non-invasive glucose estimation
- 🔹 Multi-wavelength optical sensing
- 🔹 Real-time data acquisition
- 🔹 BPW34 photodiode-based optical receiver
- 🔹 ESP32 built-in ADC for signal acquisition
- 🔹 OLED display for live readings
- 🔹 Compact and portable design
- 🔹 Low-cost implementation
- 🔹 Embedded signal processing

---

# 🏗️ System Architecture

```
          Multi-Wavelength LEDs
                  │
                  ▼
          Human Finger Tissue
                  │
                  ▼
          BPW34 Photodiode
                  │
                  ▼
      Transimpedance Amplifier
                  │
                  ▼
          ESP32 Built-in ADC
                  │
                  ▼
               ESP32
                  │
        ┌─────────┴─────────┐
        ▼                   ▼
   Signal Processing     OLED Display
```

---

# 🔧 Hardware Components

| Component | Purpose |
|------------|---------|
| ESP32 Development Board | Main controller and analog signal acquisition |
| BPW34 Photodiode | Detects transmitted light |
| Multi-Wavelength LEDs | Optical light source |
| OPA381 / LM741 | Transimpedance amplifier |
| SSD1306 OLED Display | Displays measurements |
| Voltage Regulator | Stable power supply |
| Resistors & Capacitors | Signal conditioning |

---

# 💻 Software Requirements

- Arduino IDE
- ESP32 Board Package
- Adafruit SSD1306 Library
- Adafruit GFX Library
- Wire Library

---

# ⚙️ Working Principle

1. Multi-wavelength LEDs emit light through the fingertip.
2. Bilirubin and glucose absorb different wavelengths of light.
3. The BPW34 photodiode converts the transmitted light into electrical current.
4. The transimpedance amplifier converts the current into voltage.
5. The ESP32's built-in ADC converts the analog voltage into digital values.
6. The ESP32 processes the acquired signals.
7. Optical algorithms based on the Modified Beer-Lambert Law estimate bilirubin and glucose concentrations.
8. Results are displayed on the OLED screen.

---

# 🔬 Circuit Description

### Optical Section

- Multi-wavelength LEDs illuminate the finger.
- Light interacts with biological tissue.
- The transmitted light reaches the BPW34 photodiode.

### Analog Front-End

- BPW34 generates a photocurrent proportional to the received light.
- A transimpedance amplifier converts the current into voltage.
- The output is conditioned and filtered before entering the ESP32.

### Digital Section

- The ESP32's built-in ADC samples the analog voltage.
- The ESP32 performs signal processing and optical calculations.
- Estimated bilirubin and glucose values are displayed on the OLED screen.

---

# 📁 Project Structure

```
Non-Invasive-Bilirubin-Glucose-Detection/
│
├── Code/
│   ├── ESP32_Main.ino
│   ├── SignalProcessing.cpp
│   └── Display.cpp
│
├── Circuit/
│   ├── CircuitDiagram.png
│
├── Images/
│   ├── BlockDiagram.png
│   └── WorkingModel.jpg
│
├── Documentation/
│   ├── ProjectReport.pdf
│   └── Presentation.pptx
│
├── README.md

```

---

# 🚀 Installation

### Clone the Repository

```bash
git clone https://github.com/yourusername/non-invasive-bilirubin-glucose-detection.git
```

### Open the Project

- Open Arduino IDE.
- Install the ESP32 Board Package.
- Install the required libraries.
- Select the appropriate ESP32 board.
- Upload the code to the ESP32.

---

# ▶️ Usage

1. Power on the device.
2. Place the fingertip between the LEDs and the photodiode.
3. Wait for the optical data to be collected.
4. The ESP32 processes the sensor readings.
5. Estimated bilirubin and glucose values are displayed on the OLED screen.

---

# 📊 Applications

- Neonatal jaundice screening
- Diabetes monitoring research
- Biomedical instrumentation
- Optical biosensing
- Point-of-care diagnostics
- Healthcare monitoring
- Educational and research projects

---

# 🔮 Future Enhancements

- Machine learning-based calibration
- Clinical dataset validation
- Bluetooth-enabled data transmission
- Mobile application integration
- Improved calibration algorithms
- Additional sensing wavelengths
- Advanced digital signal filtering
- Battery-powered portable enclosure

---

# 📈 Results

The prototype demonstrates the feasibility of estimating bilirubin and glucose concentrations non-invasively using optical sensing principles. Light intensity variations are captured by the BPW34 photodiode, amplified through a transimpedance amplifier, digitized using the ESP32's built-in ADC, and processed in real time. The project serves as a research prototype and provides a foundation for future calibration and clinical validation.

---

# 👩‍💻 Contributor

**Jeevika Harshine**

Biomedical Engineering Student

---

# 📚 References

1. Modified Beer-Lambert Law
2. Biomedical Optical Spectroscopy
3. ESP32 Technical Reference Manual
4. BPW34 Photodiode Datasheet
5. SSD1306 OLED Documentation

---
