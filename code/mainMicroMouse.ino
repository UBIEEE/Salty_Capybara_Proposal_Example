#include <iostream>
#include <Arduino.h>
using namespace std;
void flashLight()
{
  digitalWrite(LED_BUILTIN,LOW);
  delay(50);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(50);
}
void forward(int portNum,int speed)
{
  analogWrite(portNum,speed);
  //delay()<--The amount of 1 Block(so we need to measure this)
}
void turnRight(const int leftWheelPort,const int rightWheelPort,const int turnSpeed)
{
  analogWrite(leftWheelPort,turnSpeed);
  analogWrite(rightWheelPort,0);
}
void turnLeft(const int leftWheelPort,const int rightWheelPort,const int turnSpeed)
{
  analogWrite(leftWheelPort,0);
  analogWrite(rightWheelPort,turnSpeed);
}
void decelerate()
{
  //If sensor detects wall Slow down until sensor hits a value range of x
}

void setup() {
  int motorPort=12;
  //int accelPort=10;
  pinMode(motorPort,OUTPUT);
  //pinMode(accelPort,INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  const int motorPort=12;
  Serial.println("Testing forward: ");
  forward(motorPort,242);
  //delay(1000);
  //Serial.println("Forward at a different speed ");
  //flashLight();
  //delay(1000);
  //forward(motorPort,23);
  //Serial.println("testing turn Left");
  //turnRight(motorPort,3,100);
}
