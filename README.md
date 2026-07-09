# ESP32 LCD Timed Text Display

A simple ESP32 project that displays time-synchronized text on a 16×2 I2C LCD. The display changes its content automatically based on predefined timestamps, making it useful for lyric displays, subtitles, presentations, notifications, or any timed text animation.

---

## Features

- Time-based text synchronization
- 16×2 I2C LCD support
- ESP32 powered
- Automatic playback loop
- Easily customizable text and timings
- Beginner-friendly code

---

## Hardware Required

- ESP32 Development Board
- 16×2 I2C LCD with I2C Backpack
- Jumper Wires
- USB Cable\
- Breadboard

---

## Wiring

| LCD Pin | ESP32 Pin |
|---------|-----------|
| VCC     | 5V        |
| GND     | GND       |
| SDA     | GPIO 21   |
| SCL     | GPIO 22   |

---

## Library

Install the following library from the Arduino Library Manager:

- LiquidCrystal_I2C

---

## Installation

1. Clone this repository.
2. Open the .ino file using Arduino IDE.
3. Install the required library.
4. Connect the LCD according to the wiring diagram.
5. Select your ESP32 board and COM Port.
6. Upload the code.
7. Edit the timestamps and text to display your own content.

---

## 📸 Demo

🎥 Instagram Reel

https://www.instagram.com/reel/DalVvw0oM-i/?igsh=MWNxd3QxMGl1ODhxYg==

---

## Project Structure

 ```
ESP32-LCD-Timed-Display/
│
├── main.ino
├── README.md

```

---

##  Future Improvements

- Bluetooth Control
- Wi-Fi Synchronization
- OLED Display Support
- RGB LED Effects
- Web Interface
- SD Card Support
- Music Visualization

---

## Contributing

Contributions, improvements, and suggestions are welcome.

Feel free to fork this repository and submit a Pull Request.

---

## Support

If you found this project helpful, consider giving it a ⭐ on GitHub.

---

# Author

## dev-atharvak (Atharva Kukade)
Full Stack Developer | AI & Embedded Systems Enthusiast | Github: dev-atharvak (https://github.com/dev-atharvak)

## FOUNDER: AkTechh Solution
### About AkTechh Solution

*AkTechh Solution* is a student-led technology initiative focused on developing innovative software, IoT, embedded systems, automation, and academic engineering projects. Our goal is to create practical, affordable, and real-world technology solutions while helping students learn, build, and showcase engineering projects with modern tools and technologies.
