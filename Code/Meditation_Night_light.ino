// Meditation Night Light
// Changes an RGB LED's color smoothly that only turns on 
// when it's dark around it. Plays calm music to meditate.

// Author: Ricardo Ouvina
// Date: 19/07/2012
// Version: 2.0 - Night Light
//
// Modified by: Yulia Shilova
// Date: 5/12/2019
// Version: 2.2 - Music Feature

// ---------------------------------------------------
// The brightness of the leds follows these equations:
// Red = sin(x)
// Green = sin(x + PI/3)
// Blue = sin(x + 2PI/3)
// for x from 0 to PI
// ---------------------------------------------------

// Libraries for the music feature
#include "SD.h"
#include "TMRpcm.h"
#include "SPI.h"

#define SD_ChipSelectPin 10 // connect CS to pin 10 (PWM)

TMRpcm tmrpcm;

float RGB[3];
int ldrPin = 0;     // LDR in A 0 to read the ambient light
int ambientLight;   // variable to store the value of the ambient light
int redLed   = 3;   // red LED in Digital Pin 3 (PWM)
int greenLed = 6;   // green LED in Digital Pin 6 (PWM)
int blueLed  = 5;   // blue LED in Digital Pin 5 (PWM)

void setup(){
  // set speaker output to pin 9
  tmrpcm.speakerPin=9;
  
  Serial.begin(9600);

  //print error message if SD card failed
  if(!SD.begin(SD_ChipSelectPin)){
    Serial.println("SD failed");
    return;
  }
  
  // set up outputs
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(blueLed,OUTPUT); 
  
  // set all the outputs to low 
  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,LOW);
  digitalWrite(blueLed,LOW);
}

// function that turns LED on and off based on whether it is dark in the room or not
void manageLED(){
  
  ambientLight=analogRead(ldrPin);
  
  if(ambientLight>900){
    // calculate brightness for each colour in LED 
    for (float x=0;x<PI;x=x+0.00001){
      RGB[0]=255*abs(sin(x*(180/PI)));           
      RGB[1]=255*abs(sin((x+PI/3)*(180/PI)));    
      RGB[2]=255*abs(sin((x+(2*PI)/3)*(180/PI)));

      // turn LED on
      analogWrite(redLed,RGB[0]); 
      analogWrite(greenLed,RGB[1]);
      analogWrite(blueLed,RGB[2]);
    }
  }
  else{
     // turn LED off
    analogWrite(redLed,RGB[0]); 
    analogWrite(greenLed,RGB[1]);
    analogWrite(blueLed,RGB[2]);
  }
  delay(1);
  return;
}

// function that turns music on and off based on whether it is dark in the room or not
void manageMusic(){
  
  ambientLight=analogRead(ldrPin);
  
  if(ambientLight>900){
    tmrpcm.setVolume(4);
    tmrpcm.quality(1);
    tmrpcm.play("test.wav");
  }
  else{
    tmrpcm.pause();
  }
  delay(1);
  return;
}

void loop(){
  manageLED();
  manageMusic();
}
