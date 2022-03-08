#include <Arduino.h>
const int trigger_pin = 7;
const int echo_pin = 6;
const int buzzervemotor = 2;

int sure ;
int mesafe ;

void setup() 
{
pinMode(buzzervemotor , OUTPUT);
pinMode(trigger_pin , OUTPUT);
pinMode(echo_pin , INPUT);
}

void loop() 
{
digitalWrite(trigger_pin , HIGH);
delayMicroseconds(1000);
digitalWrite(trigger_pin , LOW);
sure = pulseIn(echo_pin , HIGH);
mesafe = (sure / 2) / 29.1;

if (mesafe <=5)
{
  digitalWrite(buzzervemotor ,HIGH);
  
  delay(150);
}
else if (mesafe <= 25)
{
  digitalWrite(buzzervemotor , HIGH);

  delay(250);
  digitalWrite(buzzervemotor , LOW);
}
else if (mesafe <= 50)
{
  digitalWrite(buzzervemotor , HIGH);
  delay(250);
  digitalWrite(buzzervemotor , LOW);
}
}