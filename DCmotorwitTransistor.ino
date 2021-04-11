int motorpin =3; //base of transitor is connected

void setup() {
  // put your setup code here, to run once:
  pinMode(motorpin,OUTPUT); //initialize pin 3 as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motorpin,HIGH); //turn motor on
  delay(2000);                 //2 seconds stop
  digitalWrite(motorpin,LOW); //turn motor off
  delay(2000);                //2 seconds stop
}
