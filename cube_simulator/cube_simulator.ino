//colums + 
int LEDcol[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={A2,A3,A4,A5 };  //4 levels analog

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
  delay(250);
  for (int cathode=0; cathode<4; digitalWrite(LEDlevel[cathode++],HIGH));
  delay(250);
  for (int cathode=0; cathode<4; digitalWrite(LEDlevel[cathode++],LOW));
  delay(250);
  for (int cathode=0; cathode<4; pinMode(LEDlevel[cathode++],INPUT));
  delay(250);
  for (int cathode=0; cathode<4; digitalWrite(LEDlevel[cathode++],HIGH));
  delay(250);
  for (int cathode=0; cathode<4; digitalWrite(LEDlevel[cathode++],LOW));
  delay(250);
  for (int cathode=0; cathode<4; pinMode(LEDlevel[cathode++],OUTPUT));
}
