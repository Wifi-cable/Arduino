//colums + 
int LEDcol[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={A2,A3,A4,A5 };  //4 levels analog

int level= 0;

void off()
{
  for (int anode= 0; anode<16; pinMode(LEDcol[anode++],INPUT));
  for (int cathode= 0; cathode<4; pinMode(LEDlevel[cathode++],INPUT));
}

int bitreverse(int n)
{
  int r= 0;
  for (int b=0; b<16; b++)
  {
    r<<=1;
    r|= n&1;
    n>>=1;
  }
  return r;
}

void planeBinary(int n)
{
  for (int b=0; b<16; b++)
  {
    digitalWrite(LEDcol[b],n&1);
    n>>=1;
  }
}

void planeReverse(int n)
{
  for (int b=16; b>0; digitalWrite(LEDcol[--b],n&1))
    n>>=1;
}

void levelBinary(int n)
{
  n= ~n;
  for (int l=0; l<4; l++)
  {
    digitalWrite(LEDlevel[l],1&n);
    n>>=1;
  }
}

void setup()
{
  for (int anode= 0; anode<16; anode++)
  {
    pinMode(LEDcol[anode], OUTPUT);
    digitalWrite(LEDcol[anode],HIGH);
  }
  for (int cathode=0; cathode<4; cathode++)
  {
    pinMode(LEDlevel[cathode], OUTPUT);
    digitalWrite(LEDlevel[cathode],LOW);
  }
  delay(1000);
}

void loop()
{
  for (int n=0; n<256; n++)
  {
    planeBinary(n|bitreverse(n));
    delay(50);
  }
}
