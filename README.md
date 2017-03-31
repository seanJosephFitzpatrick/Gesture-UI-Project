# Gesture UI

As part of the Gesture based module we are required to complete a gesture based project. Using gestures to control a device such as a Robot, game or Lego Mindstorms. There are numerous devices that are gesture based that can be used for this project. The Myo Armband is a device that sits over your forearm and reads the electrical activity produced by skeletal muscles using EMG (electromyographic) sensors. The Kinect is a device with an RGB camera with depth sensor and infrared projector with a monochrome CMOS sensor which sees the environment not as a flat image, but as dots arranged in a 3D environment. Cortana is an intelligent personal assistant that responds to voice commands. The Leap Motion consists of two cameras and three infrared LEDs. This tracks infrared light to capture the position of the hand.         
For our gesture based project we are going to use the Myo Armband to control a Robot Tank RP5. This is an Arduino based project that uses the MyoDuino library to communicate between the Myo Armband and the Arduino UNO, the Arduino UNO communicates with the Adafruit Motorshield to control the motors of the robot tank.      

## Getting Started

Download and extract the zip folder here [GestureUI](https://github.com/sarbjeetkumar/Gesture-UI-Project/archive/master.zip)        

### Prerequisites

Tank RP5 Chassis (SKU:ROB0007) -  Website [here](https://www.dfrobot.com/wiki/index.php/Tank_RP5_Chassis_(SKU:ROB0007))       
Arduino UNO - Website [here](https://www.arduino.cc/en/Main/ArduinoBoardUno)       
Adafruit Motor Shield V2.3 - Website [here](https://www.adafruit.com/products/1438)       
Myo Armband - Website [here](https://www.myo.com/)    
MyoDuino Project - Website [here](https://market.myo.com/app/54bd7403e4b00db53ad527a2/myoduino-)      
Arduino IDE - Website [here](https://www.arduino.cc/en/main/software)        


### Installing

A step by step series of examples that tell you have to get a development env running

Step 1. For software/hardware see Prerequisites. For versions of Prerequisites used in this project see **Built With** sec
Step 2. Import the myoDuino Project library into your Arduino IDE - Follow steps as laid out in MyoDuino Project pdf.         
Step 3. Attach Adafruit Motor Shield board to Arduino UNO board - Follow steps as laid out in [video tutorial](https://www.youtube.com/watch?v=vN_gcyWKCxY)                 
Step 4. The Tank RP5 Chassis comes ready to go with two DC motors built into frame. Video link above shows how to connect the motors to the Adafruit Motor Shild DC motor connections M1, M2, M3, M4. Connect each motor to one of these connections.         

End with an example of getting some data out of the system or using it for a little demo

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Authors

[Sean Fitzpatrick](https://github.com/seanJosephFitzpatrick/Gesture-UI-Project)            
[Sarabjeet Kumar](https://github.com/sarbjeetkumar/Gesture-UI-Project)

## License

This project is licensed under the [MIT](https://github.com/seanJosephFitzpatrick/Gesture-UI-Project/blob/master/LICENSE) License 

