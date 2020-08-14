// include servomotor library
#include<Servo.h>

//define our servo
Servo servo1;
Servo servo2;

//define joystick pins
int joyX=A0;
int joyY=A1;

//variables to read the value
int joyval;

void setup() {
  // put your setup code here, to run once:
servo1.attach(10);
servo2.attach(11);
}

void loop() {
  // put your main code here, to run repeatedly:
//read the value of joystick btw(0-1023)
joyval=analogRead(joyX);
joyval=map(joyval,0,1023,0,180); //servo value b/t 0-180
servo1.write(joyval); // sets the servo position according to joystick value

joyval=analogRead(joyY);
joyval=map(joyval,0,1023,0,180);
servo2.write(joyval);
delay(15);

}
