#include<Arduino.h>
void setup()
{
  pinMode(13,OUTPUT);
}
void loop()
{
  digitalWrite(13,HIGH);
  digitalWrite(13,LOW);
  delay(1000);
}
