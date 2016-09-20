#include <Servo.h>
Servo myservo;
const int max_us= 2400;
const int min_us= 600;

int us;

inline int sign(int n) {return (n==0? 0 : (n>0? 1 : -1));}

void go(int pos, unsigned int dstep)
{
  while (us != pos)
  {
    int dir= sign(pos-us);
    us+= dir;
    if (us > max_us) us= max_us;
    if (us < min_us) us= min_us;
    myservo.writeMicroseconds(us);
    delay(dstep);
  }
}

void stir(int pos1, int pos2, unsigned int cycles, unsigned int dstep)
{
  while (cycles-- > 0)
  {
    go(pos1, dstep);
    go(pos2, dstep);
  }
}

void setup()
{
  const int raised= 800;
  const int lower= 1600;
  const int upper= 1400;
  
  const int cycles= 20;
  
  myservo.attach(7);
  us= raised;
  myservo.writeMicroseconds(us);
  delay(2000);

  go(lower, 1);
  stir (upper, lower, cycles, 21);
  go(raised, 1);
}

void loop()
{
}
