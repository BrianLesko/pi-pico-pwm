
# Pico PWM Microcontroller
Control hardware with low voltage pulse width modulation and the [raspberry pi pico](https://www.raspberrypi.com/products/raspberry-pi-pico-2/), a very cheap and fast microcontroller. Capable of running code in micropython or C/C++, the pico is used here to control a servo motor

&nbsp;

<div align="center"><img src="docs/preview.gif" width="800"></div>

&nbsp;

## Software Dependencies
- `VS Code`: Integrated development environment.
- `Pico Extension`: VS Code extension for Pi Pico development.
- `CMake`: Build system generator.
- `GNU Arm Embedded Toolchain`: Compiler for ARM Cortex-M microcontrollers.
- `Pico SDK`: Software Development Kit for Raspberry Pi Pico.

&nbsp;

## Hardware Dependencies
The Pi Pico 1 or 2 will work with this code

## Run this project on your own
```
git clone https://github.com/BrianLesko/pi-pico-pwm
cd repository
mkdir build
cd build
cmake ..
make
# Copy the .uf2 file to the Pico's USB drive 
```

&nbsp;

## Repository Structure
```
repository/
├── CMakeLists.txt          # CMake configuration file for building the project
├── build/                  # Directory for build output files
├── hello_pwm.c             # Main source code file for PWM control
├── pico_sdk_import.cmake   # CMake file to import the Pico SDK
└── readme.md               # Project documentation and instructions
```

&nbsp;

## Topics 
```
C | PWM | Raspberry Pi Pico | Microcontroller | Embedded Systems 
CMake | Hardware Control | Servo Motor | SDK | Electronics
```
&nbsp;

<hr>

&nbsp;

<div align="center">



╭━━╮╭━━━┳━━┳━━━┳━╮╱╭╮        ╭╮╱╱╭━━━┳━━━┳╮╭━┳━━━╮
┃╭╮┃┃╭━╮┣┫┣┫╭━╮┃┃╰╮┃┃        ┃┃╱╱┃╭━━┫╭━╮┃┃┃╭┫╭━╮┃
┃╰╯╰┫╰━╯┃┃┃┃┃╱┃┃╭╮╰╯┃        ┃┃╱╱┃╰━━┫╰━━┫╰╯╯┃┃╱┃┃
┃╭━╮┃╭╮╭╯┃┃┃╰━╯┃┃╰╮┃┃        ┃┃╱╭┫╭━━┻━━╮┃╭╮┃┃┃╱┃┃
┃╰━╯┃┃┃╰┳┫┣┫╭━╮┃┃╱┃┃┃        ┃╰━╯┃╰━━┫╰━╯┃┃┃╰┫╰━╯┃
╰━━━┻╯╰━┻━━┻╯╱╰┻╯╱╰━╯        ╰━━━┻━━━┻━━━┻╯╰━┻━━━╯
  


&nbsp;


<a href="https://twitter.com/BrianJosephLeko"><img src="https://raw.githubusercontent.com/BrianLesko/BrianLesko/f7be693250033b9d28c2224c9c1042bb6859bfe9/.socials/svg-white/x-logo-white.svg" width="30" alt="X Logo"></a> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; <a href="https://github.com/BrianLesko"><img src="https://raw.githubusercontent.com/BrianLesko/BrianLesko/f7be693250033b9d28c2224c9c1042bb6859bfe9/.socials/svg-white/github-mark-white.svg" width="30" alt="GitHub"></a> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; <a href="https://www.linkedin.com/in/brianlesko/"><img src="https://raw.githubusercontent.com/BrianLesko/BrianLesko/f7be693250033b9d28c2224c9c1042bb6859bfe9/.socials/svg-white/linkedin-icon-white.svg" width="30" alt="LinkedIn"></a>

follow all of these for pizza :)

</div>


&nbsp;


