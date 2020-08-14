
void setup(){
  Serial.begin(9600);
}

void loop(){
  long result = Readdistance();
  Serial.println(result);
}

long Readdistance (){
  long duration, cm;
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
