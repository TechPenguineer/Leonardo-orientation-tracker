#include <Arduino.h>
#define onboard 13
void setup() {
  // put your setup code here, to run once:
}

void loop() 
{
  digitalWrite(onboard, LOW);
  delay(1000);
  digitalWrite(onboard, HIGH);
  delay(1000);
}