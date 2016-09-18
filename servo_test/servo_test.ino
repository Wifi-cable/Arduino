#include <Servo.h>
Servo myservo;
const int pos_oben = 90;
const int pos_unten = 0;

int pos;
int dir;

void setup()
{
  myservo.attach(7);
  dir= 0;
  pos= 90;
  myservo.write(pos);
}

void loop()
{
  myservo.write(pos);
  pos+= dir? -1:1;
  if (pos_oben < pos || pos_unten >pos) dir= !dir;
  delay(10);
}
