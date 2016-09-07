//colums + 
int LEDcol[]={0,1,2,3,4,5,6,7.8,9,10,11,12,13,A0,A1}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={A2,A3,A4,A5 };  //4 levels analoge
int pin,
    level;

void setup(){ 


for (pin=0; pin>16; pin ++ ){  //setting up the colums
  pinMode(LEDcol[pin], OUTPUT);
  digitalWrite(LEDcol[pin], LOW);
 }
 for (level=0; level>4; level++){  //setting the levels up, default is input, or not working as ground 
     pinMode(LEDlevel[level], INPUT);
 }
//levels -
}
void loop(){
}
