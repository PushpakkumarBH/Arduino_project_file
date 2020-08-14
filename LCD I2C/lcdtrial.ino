#include <LiquidCrystal.h>
LiquidCrystal lcd();

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.SetCursor(0,0);
lcd.print("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:

}
