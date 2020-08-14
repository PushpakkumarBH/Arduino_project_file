#include <Servo.h>
Servo servo1;

void setup(){
  servo1.attach(8);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  servo1.write(90);

}

void loop(){
  long dcenter, dright, dleft;
  dcenter = readDistance();
  
  if ( dcenter < 35){
    stopRobot();
    servo1.write(0);
    delay(1000);
    dright = readDistance();
    servo1.write(180);
    delay(1000);
    dleft = readDistance();
    servo1.write(90);
    if (dleft > dright ){ moveleft();}
    else { moveRight();}
  } 
  moveforward();
  delay(100);
}

long readDistance(){
  long duration,cm;
  
  pinMode(2,OUTPUT);
  digitalWrite(2,LOW);
  delayMicroseconds(2);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);
  
  pinMode(4,INPUT);
  duration = pulseIn(4,HIGH);
  cm = (duration/29)/2;
  return cm;
}

void moveforward(){
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}

void moveRight(){
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  delay(600);
  
}

void moveleft(){
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  delay(600);
}

void stopRobot(){
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
