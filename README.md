# Gesture Based UI

![alt tag](https://github.com/seanJosephFitzpatrick/Gesture-UI-Project/blob/master/MYO.png)

4th year Software Development project. The project uses gestures to control a robot tank. The Myo Armband is a device that sits over your forearm and reads the electrical activity produced by skeletal muscles using EMG (electromyographic) sensors. This is an Arduino based project that uses the MyoDuino library to communicate between the Myo Armband and the Arduino UNO, the Arduino UNO communicates with the Adafruit Motorshield to control the motors of the robot tank.

Languages, Technologies and Implementation Architecture used for this project:
* C Language, Myo Armband, Arduino IDE, Myo-Arduino, Arduino Uno, Adafruit Motor Shield.

## Getting Started

Download and extract the zip folder here [GestureUI](https://github.com/seanJosephFitzpatrick/Gesture-UI-Project/archive/master.zip)        

### Prerequisites

Tank RP5 Chassis (SKU:ROB0007) -  Website [here](https://www.dfrobot.com/wiki/index.php/Tank_RP5_Chassis_(SKU:ROB0007))       
Arduino UNO - Website [here](https://www.arduino.cc/en/Main/ArduinoBoardUno)       
Adafruit Motor Shield V2.3 - Website [here](https://www.adafruit.com/products/1438)       
Myo Armband - Website [here](https://www.myo.com/)    
MyoDuino Project - Website [here](https://market.myo.com/app/54bd7403e4b00db53ad527a2/myoduino-)      
Arduino IDE - Website [here](https://www.arduino.cc/en/main/software)        


### Installing

**Step 1**. For software/hardware see Prerequisites. For versions of Prerequisites used in this project see **Built With** section.       
**Step 2**. Import the myoDuino Project library into your Arduino IDE.         
**Step 3**. Attach Adafruit Motor Shield board to Arduino UNO board - Follow steps as laid out in [video tutorial](https://www.youtube.com/watch?v=vN_gcyWKCxY)                 
**Step 4**. The Tank RP5 Chassis comes ready to go with two DC motors built into frame. Video [link](https://www.youtube.com/watch?v=vN_gcyWKCxY) shows how to connect the motors to the Adafruit Motor Shild DC motor connections M1, M2, M3, M4. Connect each motor to one of these connections.        
**Step 5**. Connect the power cable to the Adafruit Motor Shield board. The connections says power on the board with a plus and minus either side.      
**Step 6**. Run the Arduino IDE and save the file in your project folder along with the myo32.dll and the MyoDuino.exe. You will find the myo32.dll and the MyoDuino.exe in the bin folder of the MyoDuino Project.         
**Step 7**. Copy and paste code from code.ino file in code [folder](https://github.com/seanJosephFitzpatrick/Gesture-UI-Project/tree/master/code).                  

## Deployment

**Step 1**. Set up Myo Armaband - See [Myo Suport](https://support.getmyo.com/hc/en-us) for setting up the Myo on your device.       
**Step 2**. Connect the Tank RP5 Chassis with an A male to B male cable. Connect the A male side of the cable to your laptop device and the B male side of the cable to the Arduino UNO Barrel Jack on the Tank RP5 Chassis.         
**Step 3**. Run the MyoDuino.exe and select the correct port and press connect - See the MyoDuino pdf.         


## Built With

Tank RP5 Chassis (SKU:ROB0007) -  Hardware      
Arduino UNO - Hardware     
Adafruit Motor Shield V2.3 - Hardware     
Myo Armband, Gesture Control Armband - Hardware   
MyoDuino Project - Software     
Arduino IDE V1.8 - Software

## Authors

[Sean Fitzpatrick](https://github.com/seanJosephFitzpatrick/Gesture-UI-Project)            
[Sarabjeet Kumar](https://github.com/sarbjeetkumar/Gesture-UI-Project)

## License

This project is licensed under the [MIT](https://github.com/seanJosephFitzpatrick/Gesture-UI-Project/blob/master/LICENSE) License 

