//colums + 
int LEDcol[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={A2,A3,A4,A5 };  //4 levels analog

void off()
{
  for (int anode= 0; anode<16; pinMode(LEDcol[anode++],INPUT));
  for (int cathode= 0; cathode<4; pinMode(LEDlevel[cathode++],INPUT));
}

unsigned int bitreverse(unsigned int n)
{
  unsigned int r= 0;
  for (int b=0; b<16; b++)
  {
    r<<=1;
    r|= n&1;
    n>>=1;
  }
  return r;
}

void planeBinary(unsigned int n)
{
  for (int b=0; b<16; b++)
  {
    digitalWrite(LEDcol[b],n&1);
    n>>=1;
  }
}

void planeReverse(unsigned int n)
{
  for (int b=16; b>0; digitalWrite(LEDcol[--b],n&1))
    n>>=1;
}

void levelBinary(unsigned int n)
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
  for (int cathode=0; cathode<4; pinMode(LEDlevel[cathode++], INPUT));
}

void loop()
{
  for (unsigned int n=0; n<256; n++)
  {
    unsigned int plane[4];
    plane[0]= n|bitreverse(n);
    plane[1]= (n<<8)|(bitreverse(n)>>8);
    plane[2]= ~plane[1];
    plane[3]= ~plane[0];
    for (unsigned int swaps=0; swaps<20; swaps++)
    {
      for (unsigned int level= 0; level<4; level++)
      {
        planeBinary(plane[level]);
        pinMode(LEDlevel[level], OUTPUT);
        digitalWrite(LEDlevel[level],LOW);
        delay(3);
        pinMode(LEDlevel[level], INPUT);
        delay(1);
      }
    }
  }
}
