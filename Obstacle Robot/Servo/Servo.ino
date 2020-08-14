#include <Servo.h>
Servo Servo1;

void setup(){
  Servo1.attach(8);
}

void loop(){
  Servo1.write(30);
  delay(2000);
  Servo1.write(150);
  delay(2000);
}
