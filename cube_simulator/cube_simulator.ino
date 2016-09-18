//colums + 
int LEDcol[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={A2,A3,A4,A5 };  //4 levels analog

void planeBinary(int n)
{
  for (int b=0; b<16; b++)
  {
    digitalWrite(LEDcol[b],n&1);
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
}

void loop()
{
  for (int n=0; n<256; n++)
  {
    planeBinary(n);
    delay(50);
  }
  for (int cathode=0; cathode<4; digitalWrite(LEDlevel[cathode++],HIGH));
  for (int n=0; n<256; n++)
  {
    planeBinary(n);
    delay(50);
  }
  for (int cathode=0; cathode<4; digitalWrite(LEDlevel[cathode++],LOW));
  for (int n=0; n<256; n++)
  {
    planeBinary(n);
    delay(50);
  }
  for (int cathode=0; cathode<4; pinMode(LEDlevel[cathode++],INPUT));
  for (int n=0; n<256; n++)
  {
    planeBinary(n);
    delay(50);
  }
  for (int cathode=0; cathode<4; digitalWrite(LEDlevel[cathode++],HIGH));
  for (int n=0; n<256; n++)
  {
    planeBinary(n);
    delay(50);
  }
  for (int cathode=0; cathode<4; digitalWrite(LEDlevel[cathode++],LOW));
  for (int n=0; n<256; n++)
  {
    planeBinary(n);
    delay(50);
  }
  for (int cathode=0; cathode<4; pinMode(LEDlevel[cathode++],OUTPUT));
}
