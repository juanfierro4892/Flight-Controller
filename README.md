Flight Controller 

This is a custom flight controller designed for control rockets.
It uses an STM32F722 microcontroller, ICM-45686 IMU, BMP580 barometer, and has a microSD card for logging flight data. It supports 2S LiPo batteries with onboard charging and has PWM outputs for controlling servos.

The board was designed in KiCad and is fully open source.

Technical Specifications
Brain: STM32F722RET6 microcontroller.

IMU: ICM-45686 high-precision motion sensor.

Barometer: BMP580 altitude tracker.

Actuation: Multi-channel Servo output via PWM.

Data Logging: Onboard MicroSD card slot.

Power Management:

BQ25883: 2-cell LiPo battery charger via USB-C.

TPS63070: 5V Buck-Boost regulator for servos.

LMR51430: 3.3V Buck regulator for the MCU and sensors.

It is coded in C in visual studio code.
