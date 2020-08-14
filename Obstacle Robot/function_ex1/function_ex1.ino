void setup(){
  Serial.begin(9600);
}

void loop(){
  int x = 2;
  int y = 3;
  int result=0;
  
  result = add (x,y);
  Serial.println(result);
}

int  add (int n,int m){
  int r = n+m;
  return r;
}
