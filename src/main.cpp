#include <Arduino.h>
#define onboard 13
void setup() {
  pinMode(onboard,OUTPUT);
}

void loop() 
{
  digitalWrite(onboard, LOW);
  delay(1000);
  digitalWrite(onboard, HIGH);
  delay(1000);
}