# Industrial-IoT-Monitoring-System-
ESP32-based Industrial IoT Monitoring System using Wokwi simulation.
# Industrial IoT Equipment Health Monitoring System

## Overview

An ESP32-based Industrial IoT Monitoring System designed to monitor machine health parameters such as temperature, humidity, and vibration.

## Features

* Real-time temperature monitoring
* Humidity monitoring
* Vibration monitoring
* Fault detection
* LED alert indication
* Wokwi simulation

## Components Used

* ESP32
* DHT22 Sensor
* Potentiometer (Vibration Simulation)
* Red LED
* Green LED

## System Architecture

Sensors → ESP32 → Fault Detection Logic → Status LEDs

## Working

The ESP32 continuously reads temperature, humidity, and vibration data.

If:

* Temperature > 50°C
* OR vibration exceeds threshold

The system triggers an alert and turns on the red LED.

Otherwise, the machine is considered healthy and the green LED remains ON.

## Results

The system successfully detects abnormal operating conditions and provides immediate visual alerts.

## Future Enhancements

* MQTT Integration
* Node-RED Dashboard
* Grafana Analytics
* Cloud Data Storage

## Skills Demonstrated

* Embedded Systems
* ESP32 Programming
* Sensor Interfacing
* Industrial IoT
* Wokwi Simulation
* GitHub Documentation
