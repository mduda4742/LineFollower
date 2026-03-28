# LineFollower

This project presents an autonomous Line Follower robot built around the STM32 NUCLEO-L476RG platform. The main objective is fast and accurate tracking of a black line on a white surface.

The work includes:
- 3D modeling of the robot and custom parts
- 3D printing and mechanical assembly
- PID controller implementation and tuning on NUCLEO-L476RG
- Electrical schematic design and integration of all electronic modules

## Project Overview

The robot uses a reflective sensor array to estimate the line position in real time. Based on sensor readings, a PID controller computes the correction signal and adjusts DC motor speeds independently. This approach improves cornering stability, reduces oscillations, and enables smoother trajectory tracking.

Power is provided by two Li-Ion cells, and firmware development is done in STM32CubeIDE.

## Mechanical Design (3D CAD + Printing)

The mechanical part of the project was designed as a custom 3D model and manufactured with 3D-printed components. The repository contains CAD files for the chassis and mounting elements in the `Mechanics/` directory.

## Control System (PID on STM32 NUCLEO-L476RG)

The control firmware is implemented in C for STM32L476RG. The key part is PID parameter tuning to balance:
- fast response
- stable line tracking
- minimal overshoot during turns

Firmware sources are located in `Firmware/Core/Src/` and headers in `Firmware/Core/Inc/`.

## Electrical Design

The project also includes electrical schematic development for power distribution, sensor connections, motor driving, and microcontroller integration.

## Repository Structure

- `Firmware/` - STM32 project files, startup code, HAL configuration, and PID implementation
- `Mechanics/` - 3D CAD models and assembly files
- `Hardware/` - hardware-related resources

## Demo Video

[![Watch the demo](https://github.com/user-attachments/assets/b427ec32-a8ac-44fe-875d-f9b29716606c)](https://youtube.com/shorts/kqhGqm2l2KI?feature=share)

## Photos

<img src="https://github.com/user-attachments/assets/431edf7b-ec35-4ea9-866b-4f6dfcab6060" width="49%" alt="zlozenie_robot" />

<img src="https://github.com/user-attachments/assets/b427ec32-a8ac-44fe-875d-f9b29716606c" width="45%" alt="zlozenie_rzeczywistosc" />


