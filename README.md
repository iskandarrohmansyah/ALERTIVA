# ALERTIVA - MPU6050

## MPU6050 Sensor Module

This repository contains the implementation and testing of the MPU6050 sensor used in the ALERTIVA project.

The MPU6050 is used to detect the driver's body movement and tilt angle as one of the indicators in the microsleep detection system.

## About ALERTIVA

ALERTIVA is a microsleep detection system designed for four-wheel vehicle drivers.

The system uses several sensors to monitor the driver's condition. One of the main sensors is the MPU6050, which is used to monitor changes in body position and tilt.

## MPU6050

The MPU6050 is a 6-axis motion sensor that combines:

- 3-axis Accelerometer
- 3-axis Gyroscope

In the ALERTIVA system, the MPU6050 is used to detect changes in the driver's body position.

### Main Parameters

| Parameter | Description |
|-----------|-------------|
| Sensor | MPU6050 |
| Accelerometer | 3-Axis |
| Gyroscope | 3-Axis |
| Communication | I2C |
| Microcontroller | ESP32 |
| Application | Driver body tilt detection |

## Components

The components used in this module are:

- ESP32
- MPU6050
- Jumper wires
- Breadboard
- USB cable

## Wiring

The MPU6050 communicates with the ESP32 using the I2C protocol.

| MPU6050 | ESP32 |
|---------|-------|
| VCC | 3.3V |
| GND | GND |
| SCL | GPIO 22 |
| SDA | GPIO 21 |

## How It Works

The MPU6050 reads acceleration and angular velocity data from the driver's body movement.

The sensor data is processed by the ESP32 to determine changes in the driver's body tilt.

The detected body position can then be used as one of the parameters for microsleep detection in the ALERTIVA system.

## Project Status

🚧 Development and Testing

## Future Development

Future development of this module includes:

- Calibration of the MPU6050 sensor
- Body tilt angle calculation
- Microsleep detection algorithm
- Integration with the Pulse Sensor
- Integration with the ALERTIVA warning system

## Author

Iskandar Rohman Syah

## License

This project is developed for educational and research purposes.
