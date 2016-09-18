#include <Servo.h>
Servo myservo;
int pos_oben = 0;
int pos_unten = 180;

int toggle;

void setup()
{
  myservo.attach(7);
  toggle= 0;
  myservo.write(90);
}

void loop()
{
  myservo.write(toggle? pos_unten : pos_oben);
  toggle= ~toggle;
  delay(500);
}
