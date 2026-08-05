Flight Controller 

This is a custom flight controller designed for control rockets.
It uses an STM32F722 microcontroller, ICM-45686 IMU, BMP580 barometer, and has a microSD card for logging flight data. It supports 2S LiPo batteries with onboard charging and has PWM outputs for controlling servos.

The board was designed in KiCad and is fully open source.

PCB: <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/8300f77f-ea9a-435d-bd03-c623291e12f0" />

3D image: <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/59a5fce0-0b8f-4445-9491-84144a438a75" />
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/31f09ed8-32c6-4d63-8986-9667d306f081" />


Schematic: <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/cb309dcf-8b32-4df1-bf56-2bab2c733954" />
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/e5bdd5bb-bc4c-4190-85bd-e58090da6d77" />


Assembly:

There is no assembly instructions because as it have a lot of components there come assembled from the manufacturer aka JLCPCB



Technical Specifications
Brain: STM32F722RET6 microcontroller.

IMU: ICM-45686 high-precision motion sensor.

Barometer: BMP580 altitude tracker.

Actuation: Multi-channel Servo output via PWM.

Data Logging: Onboard MicroSD card slot.

Power Management:

BQ25883: 2-cell LiPo battery charger via USB-C.

TPS63070: 5V Buck-Boost regulator for servos.

LMR51430: 3.3V Buck regulator for the MCU and sensors..

D2: RGB LED (Common Anode) — Visual status indicator for system boot, ready-to-fly state, and critical errors (IMU, battery, SD card, and power rails).

It is coded in C in visual studio code.
