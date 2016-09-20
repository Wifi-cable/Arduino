#include <Servo.h>
Servo myservo;
const int max_us= 2400;
const int min_us= 600;

int us;
int dir;

inline int sign(int n) {return (n==0? 0 : (n>0? 1 : -1));}

void go(int pos, unsigned int dstep)
{
  while (us != pos)
  {
    int dir= sign(pos-us);
    us+= dir;
    myservo.writeMicroseconds(us);
    delay(dstep);
  }
}

void stir(int lower, int upper, unsigned int cycles, unsigned int dstep)
{
  while (cycles-- > 0)
  {
    go(upper, dstep);
    go(lower, dstep);
  }
}

void setup()
{
  const int raised= 900;
  const int lower= 1900;
  const int upper= 1500;
  
  const int cycles= 10;
  
  myservo.attach(7);
  dir= 0;
  us= raised;
  myservo.writeMicroseconds(us);
  delay(1000);

  go(upper, 1);
  stir (lower, upper, cycles, 10);
  go(raised, 1);
}

void loop()
{
}
