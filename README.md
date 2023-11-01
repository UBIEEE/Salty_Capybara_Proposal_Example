# Salty Capybara Proposal

## Overview

We have decided on using VSCode (PlatformIO) and will be using flood fill algorithm. Circuit boards will be connected to software IDE (PlatformIO) and send data received to the IDE or receive instructions to perform. We have chosen to use a 4-Wheeled single PCB Micromouse. We will integrate software and hardware through uploading our code from vscode and upload the code directly to the Arduino through a usb-A to A. We will be measuring all of these hardware voltages through Arduino which can be used to set a maximum/minimum voltage output according to the amount of voltages it can take. 

List: 
- Battery: 3.7 Volts(Prone to change)
- Proximity Sensors: 3.3 Volts or 5 Volts 
- Ultrasonic Sensors: 3 or 5 Volts
- Gyroscope: 3 Volts or 5 Volts
- Motor: 3 - 6 VDC
### Software Plan

The Algorithm we will be using(Floodfill): https://medium.com/@minikiraniamayadharmasiri/micromouse-from-scratch-algorithm-maze-traversal-shortest-path-floodfill-741242e8510
Matplotlib++ Heatmap(GUI): https://github.com/alandefreitas/matplotplusplus/blob/master/docs/COMPLETE_GALLERY.md#heatmap_1

Arduino(Platform IO), C++. GUI: Can try Heatmap matplotlib. 
- Sensors have multiple inputs to the code such as bool,double,int,str types and what not.
Sensors to code: 
- Proximity: Double?
- Gyroscope: Double? To determine how much it should rotate by
- Motor: Probably int to limit the speed.

Extended plans: Build a micromouse simulator with only the bare minimum to hold the data and sends out the commands to the robot. (This starts in Java and tehen we will convert this into C++ later on because our skills in Java are just better).

### Hardware Plan

- Arduino Uno
- Wheels: Plan on using 4 - Ordered 2.6" diameter wheels - will experiment with 3d printed wheels
- Batteries: Two lithium ion polymer batteries will be connected in series to power the arduino.
- Sensors:
    - Gyroscope - On the top of the micrromouse - Helps detect the angle of rotation
    - Proximity Sensor - On the sides of the mouse - Better at detecting close range distances
    - Ultrasonic Sensor - On the front of the mouse - Will detect further distances
 - Motors - One for each wheel. DC motors. Gear ratio will be changed accordingly for performance.
 - Break out board will connect the arduino to the motors.
 - Wires will be attached to breadboard for testing but will be soldered for final mouse.

## Flowchart of System Design
 
![image](https://github.com/UBIEEE/Salty_Capybara_Proposal_Example/assets/145487784/5baa5811-c822-4a0a-adbb-7a4d6d4d6400)


### Parts and Costs

## Purchases

| Item Name w/Link | Cost per Unit | # of Units | Total Cost |
| ---- | ---------------- | ---- | ---------------- |
| [ARDUINO UNO R4 MINIMA](https://www.digikey.com/en/products/detail/arduino/ABX00080/20371542) | $20.00 | 1 | $20.00 |
| [DC Gearbox Motor - "TT Motor" - 200RPM - 3 to 6VDC](https://www.digikey.com/en/products/detail/adafruit-industries-llc/3777/8687221) | $2.95 | 4 | $11.80 |
| [Adafruit DRV8833 DC/Stepper Motor Driver Breakout Board](https://www.adafruit.com/product/3297) | $5.95 | 2 | $11.90 |
| [Lithium Ion Polymer Battery - 3.7v 1200mAh](https://www.adafruit.com/product/258?gad_source=1&gclid=Cj0KCQjwy4KqBhD0ARIsAEbCt6jXzDKFZ9s2u1SWslHxj_pmHKfOvDnqfYjc1EqkqUuEZbM6-pj9eD4aAlzkEALw_wcB) | $9.95 | 2 | $19.90 |
| [JST PH 2mm 4-Pin to Male Header Cable - I2C STEMMA Cable - 200mm](https://www.adafruit.com/product/3955) | $1.50 | 2 | $3.00 |
| [Adafruit Micro-Lipo Charger for LiPoly Batt with USB Type C Jack](https://www.adafruit.com/product/4410) | $5.95 | 1 | $5.95 |
| [Linear Voltage Regulator IC Positive Fixed 1 Output 800mA TO-220](https://www.digikey.com/en/products/detail/stmicroelectronics/LD1117V33/586012?utm_adgroup=&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Shopping_Product_Medium%20ROAS%20Categories&utm_term=&utm_content=&utm_id=go_cmp-20223376311_adg-_ad-__dev-c_ext-_prd-586012_sig-Cj0KCQjwy4KqBhD0ARIsAEbCt6ibgO35ZWxodiH8e7t-dVcD3Mk_iP7YyMoJ_GBVjmCk-Ivfm1AZD1EaAr--EALw_wcB&gad_source=1&gclid=Cj0KCQjwy4KqBhD0ARIsAEbCt6ibgO35ZWxodiH8e7t-dVcD3Mk_iP7YyMoJ_GBVjmCk-Ivfm1AZD1EaAr--EALw_wcB) | $0.95 | 2 | $1.90 |
| [Adafruit VCNL4020 Proximity and Light Sensor - STEMMA QT / Qwiic](https://www.adafruit.com/product/5810) | $5.95 | 2 | $11.90 |
| [Adafruit LSM6DSOX 6 DoF Accelerometer and Gyroscope - STEMMA QT / Qwiic](https://www.adafruit.com/product/4438) | $11.95 | 1 | $11.95|
| [STEMMA QT / Qwiic JST SH 4-pin to Premium Male Headers Cable - 150mm Long](https://www.adafruit.com/product/4209) | $0.95 | 2 | $1.90 |
| [Ultrasonic Distance Sensor - 3V or 5V - HC-SR04 compatible - RCWL-1601](https://www.adafruit.com/product/4007) | $3.95 | 2 | $7.90 |
| [THIN WHITE WHEEL FOR TT DC GEARB](https://www.digikey.com/short/85b98tj9) | $1.50 | 4 | $6.00 |
| | | **Total** | **$114.10** |
    
### Custom Creation

1. Wheels - 3D printed. - 4 Wheels 
3. Chassis - 3D printed.
4. Casing for Arduino and battery - 3D printed.

### Parts on Hand

1. Wires
2. Breadboard

## 3D Model

![image](https://github.com/UBIEEE/Salty_Capybara_Proposal_Example/assets/145487784/f2ae0a72-aa0b-45d2-b1e0-8cc6366dc2cb)


## Teammates and Responsibilities

- Caleb - CAD Modeling + Wiring. He will be in charge of doing the 3D-Modeling for the Arduino, Chasis and Battery. After he is done with this, he will be focusing on the wiring of the breadboard.  
- Spencer - Will work with the hardware required as well as how its implemented.
- Ethan - I will be researching what algorithms will be fitting the Micrmouse the best. I will also be trying to process the data from the Arduino to the micromouse.
- Jonathan (Super Not Himothy) - Make sure hardware and software work accordingly with one another. Make sure there's clear communication between hardware and software.
- Devan - Working with Ethan on algorithms fit micromouse. I also have knowledge of Arduino to some extent so I can help with that if needed.

### IEEE Offficial Rules: 
https://ewh.ieee.org/sb/columbus/devry/sacFiles/MicromouseRules.pdf

## Milestones

### Milestone Set 1: 11/8/23

* Get GPIO output from the microcontroller to light up LEDs on a breadboard. 
* Get GPIO input from the microcontroller to read button presses on a breadboard.
* Get GPIO input from the microcontroller to read sensor data from the ultrasonic sensors.
* Initial 3D Model for chassis completed.

### Milestone Set 2: 11/22/23
* Get the algorithm working in simulation. 
* Positioning algorithm can properly visualize mouse in simulation.
* Can make the motors spin from the battery.

### Milestone Set 3: 11/29/23
* Microcontroller can control the motors. 
* Microcontroller can read sensor data and calculate the position of the mouse.
* Microcontroller can run the algorithm.

### Milestone Set 4: Over break
* TBD: Bussin

### Milestone Set 5: 1/10/24
* Mouse can move in a straight line a stop when it reaches an obstacle.
* Mouse can turn 90 degrees when told to by the algorithm.
* Mouse can move for 10 minutes straight. 
* Mouse can execute different algorithms based on user inputs from physical buttons on the mouse. 

### Milestone Set 6: 1/24/24
* Mouse can move through a maze randomly without hitting walls.

### Milestone Set 7: 2/7/24
* Mouse can solve the maze. 



