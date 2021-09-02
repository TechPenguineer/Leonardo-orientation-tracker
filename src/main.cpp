#include <Arduino.h>
#define onboard 13

void setup() {
  pinMode(onboard,OUTPUT);
}

void loop() 
{
  int i;
  for(i=1; i<0; i++)
  {
    Serial.println(i);
  }
  digitalWrite(onboard, LOW);
  delay(1000);
  digitalWrite(onboard, HIGH);
  delay(1000);
}
