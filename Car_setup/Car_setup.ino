void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);  //left motors forwad
pinMode(12,OUTPUT);  //left motors reverse
pinMode(11,OUTPUT);  //right motors forward
pinMode(10,OUTPUT);  //right motors reverse
}

void loop() {
  // put your main code here, to run repeatedly:
int i=1;
while(i<=10){
  //command to movve forward
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW); 
      delay(100);
  //command to move backward
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH); 
      delay(100);
  //command to move left
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW); 
      delay(100);
  //command to move right
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW); 
      delay(100);
  //command to stop
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW); 
      delay(100);
   //increase the value of i
   i++;
  }
}
