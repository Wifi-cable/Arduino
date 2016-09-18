#include <Servo.h>
Servo myservo;
const int max_us= 2400;
const int min_us= 600;

int us;
int dir;

void setup()
{
  myservo.attach(7);
  dir= 0;
  us= 1500;
  myservo.writeMicroseconds(us);
}

void loop()
{
  myservo.writeMicroseconds(us);
  us+= dir? -1:1;
  if (max_us < us) dir= 1;
  if (min_us > us) dir= 0;
  delay(4);
}
