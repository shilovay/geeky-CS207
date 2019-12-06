# Arduino Musical Mood Lamp
Project repository for CS 207, fall 2019

Changes an RGB LED's color smoothly that only turns on when it's dark around it. Plays any music uploaded to mini SD card.
Play calm music for meditation, or hard rock for a party :)

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
# Software Required
* Arduino
* Fritzing
* Audio .mp3 to .wav converter

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

------------------------------
# User Manual
V1: This version is designed to be a generic night light mood lamp, where the LED turns on and changes colour as soon as it gets dark in the room. Simply power up your arduino, add glass jar with the office paper inside it (this will distribut light in a nice way inside the jar) on top of your build. Make sure that the top of glass jar is not covered so the photo resistor can detect light/darkness. 

V2: This version works in a similar way as V1 with a few additions. One extra step is necessary for this version to work is to power up the speaker from your PC via USB cable. Regardless of having a battery attached to the speaker, it won't work until it is connected to PC. 

------------------------------
# Team
The author is the only team member in a team of one.

------------------------------
# Reference
* Original project idea:  https://www.makeuseof.com/tag/build-companion-cube-mood-lamp/
* Original project build: https://www.instructables.com/id/Mood-Lamp-with-Arduino/ 
                          https://myrobotduino.blogspot.com/2016/08/mood-lamp-with-arduino.html
* MP3 to WAV Converter:   https://www.online-convert.com
* SD Module wiring:       https://learn.adafruit.com/adafruit-micro-sd-breakout-board-card-tutorial/arduino-wiring 

------------------------------
# Special Thanks
Special thanks to Trevor Tomesh, the instructor of CS207, and Ayden Ell, classmate, for helping me out with this project! 
