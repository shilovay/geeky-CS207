# Arduino Meditation Night Light
Project repository for CS 207, fall 2019

------------------------------
# Repository Contents
This repository consists of:
* **Code** - Code used for this project
* **Diagrams** - All the diagrams used for this project
* **Images** - All the images used for this project
* **TMRpcm Library** - A library used for music feature
* **LICENSE** - A license with no conditions whatsoever
* **Links** - Reference links + link to the video presentation
* **Documentation** - All the documentation used for this project
* **README.md** - ReadMe file (about the project)

------------------------------
# Materials Required
List of materials required for the original build:
* 1 x Arduino UNO
* 1 x Breadboard
* 1 x USB cable
* 1 x RGB LED
* 1 x 560 Ohm resistors
* 1 x Small breadboard
* 9 x Jumper wires, preferably different colors 
* 1 x Glass jar

Additional list of materials required for modified build:
* 1 x Speaker with built-in amplifier
* 3 x 560 Ohm resistors
* 1 x Photoresistor
* 1 x SD card
* 1 x SD card module
* 3 x White office paper
* Extra jump wires

------------------------------
# Build Instructions
### V1: Original Build
Image of original build:

![Build1](/Images/NightLight1.jpg)

Breadboard diagram of original build:

![Build1](/Diagrams/Original%20%2B%20Photoresistor.jpg)

1. Connect RGB LED to analog pins 3,5,6 and the ground
2. Connect photoresistor to pin A0 and the ground
3. Add resistor the way it is shown in the breadboard diagram
4. Connect 5V and GRN between Arduino and breadboard

------------------------------
### V2: Adding Music Feature
Image of final build:

![Build2](/Images/MoodLamp1.JPG)

![Build2](/Images/MoodLamp3.JPG)

Breadboard diagram of final build:

![Build2](/Diagrams/MoodLamp.jpg)

1. For SD module:
  - Connect 5v with 5v
  - Connect GND with GND
  - Connect CLK with pin 13
  - Connect DO with pin 12
  - Connect DI with pin 11
  - Connect CS with pin 10
2. For LED:
  - Add a resistor to each leg except Ground (one for each colour)
3. For speaker:
  - Connect one wire to the GND
  - Connect second wire to pin 9
