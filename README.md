# RTOS Project for Vehicle Seat Heating System

## Introduction
This project implements a Real-Time Operating System (RTOS) using FreeRTOS on a TivaC microcontroller to control the seat heating system in a vehicle. The system includes tasks for measuring CPU load, monitoring and adjusting seat temperatures, and displaying system states.

## System Overview
The system consists of several tasks designed to manage various aspects of the seat heating control system. These tasks operate concurrently and communicate with each other to ensure the proper functioning of the system.

### Key Tasks
- **CPU Load Measurement Task:** Measures the CPU load of the system (Executes every 1000 ms).
- **Tasks Time Measurement Task:** Measures the execution time of various tasks (Executes every 1000 ms).
- **Display System State Task:** Displays the current state of the seat heating system, including temperature, heating levels, and heater intensity (Executes every 1000 ms).
- **Seat 1 Adjust Heater Task:** Adjusts the heater intensity for seat 1 based on the desired and current temperatures (Executes every 100 ms).
- **Seat 2 Adjust Heater Task:** Adjusts the heater intensity for seat 2 based on the desired and current temperatures (Executes every 100 ms).
- **Get Seat 1 Current Temperature Task:** Reads the current temperature of seat 1 using a sensor (Executes every 100 ms).
- **Get Seat 2 Current Temperature Task:** Reads the current temperature of seat 2 using a sensor (Executes every 100 ms).
- **Check Seat 1 Heating Level Change Task:** Monitors user input to change the heating level for seat 1 (Executes every 100 ms).
- **Check Seat 2 Heating Level Change Task:** Monitors user input to change the heating level for seat 2 (Executes every 100 ms).

## Project Structure
- **Schematic Diagram:** Contains the circuit design for the seat heating system.
- **UART Messages:** Documentation of the UART communication used in the system.
- **Simso Simulation:** Provides a simulation of the system using Simso.
- **Connections:** Details the hardware connections for the system.
