#include <Arduino.h>
#include "ServoATtiny85.h"

#define SERVO1_PIN PB3
#define SERVO2_PIN PB4

Servo servo1, servo2;

void setup()
{
  servo1.attach(SERVO1_PIN);
  servo2.attach(SERVO2_PIN);
}

bool forward = true;

void loop()
{
  int angle = forward ? 180 : 0;
  forward = !forward;
  servo1.write(angle);
  servo2.write(180 - angle);

  delay(1000);
}
