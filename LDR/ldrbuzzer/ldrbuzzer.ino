//Youtube Video link:https://www.youtube.com/watch?v=SkGmtsA69ts
//for circuit design >>>>>>clicck above
//code written by Pushpakkumar BH
//source Youtube Channel MERT ARDUINO


const int led=12; //declaring variables
const int buzz=13; //Globally
const int ldr=A0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(buzz,OUTPUT);
pinMode(ldr,INPUT);   
}

void loop() {
  // put your main code here, to run repeatedly:
int ldrstatus=analogRead(ldr); //reads the state of ldr 

if(ldrstatus>=400)
{
  tone(buzz,100);
  digitalWrite(led,HIGH);
  delay(1000);

  noTone(buzz);
  digitalWrite(led,LOW);
  delay(1000);

  Serial.println("-------Buzzer Activated Sucessfully------------");
 }
 else{
  noTone(buzz);
  digitalWrite(led,LOW);
  delay(1000);

  Serial.println("--------Buzzer Not Activated------------------");
  }
  
}
