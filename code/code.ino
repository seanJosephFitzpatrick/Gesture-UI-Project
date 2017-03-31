#include <MyoController.h>
//#include <Servo.h>
#define trigPin 12
#define echoPin 13
//#include <Wire.h>
#include <Adafruit_MotorShield.h>
//#include "utility/Adafruit_MS_PWMServoDriver.h"

int inputPin=4; 
int outputPin=5; 

MyoController myo = MyoController();


Adafruit_MotorShield AFMS = Adafruit_MotorShield();  


Adafruit_DCMotor *M1 = AFMS.getMotor(1);
Adafruit_DCMotor *M2 = AFMS.getMotor(2);

void setup() {
    Serial.begin(9600);           
    Serial.println("Adafruit Motorshield v2 - DC Motor test!");
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    AFMS.begin();  // create with the default frequency 1.6KHz
    
    myo.initMyo();
    
    //M1->setSpeed(150);
    //M2->setSpeed(150);
    myo.initMyo();
}

void loop() {
 
   getMyoGestures();
   delay(75); 
  
}

void getMyoGestures(){
    myo.updatePose();
    switch ( myo.getCurrentPose() ) {
      case rest:
         
          M1->run(RELEASE);
          M2->run(RELEASE);
          break;
      case fist:
          
          M1->setSpeed(150);
          M2->setSpeed(150);
          M1->run(FORWARD);
          M2->run(FORWARD);
          break;
      case waveIn:
         
          M1->setSpeed(100);
          M2->setSpeed(100);
          M1->run(BACKWARD);
          M2->run(FORWARD);
          break;
      case waveOut:
         
          M1->setSpeed(100);
          M2->setSpeed(100);
          M1->run(FORWARD);
          M2->run(BACKWARD);
          break;
      case fingersSpread:
         
           M1->setSpeed(150);
           M2->setSpeed(150);
           M1->run(BACKWARD);
           M2->run(BACKWARD);
          break;
    }
}
