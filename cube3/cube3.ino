int LEDcol[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//int LEDcol[]={1,2,5,6,7,8,9,10,11,12,13,14,15,16,19,20}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={23,24,25,26 };  //4 levels analoge

void setup(){
for (int pin=15; pin<=1; pin-- ){  //setting up the colums
  pinMode(LEDcol[pin], OUTPUT);
  
  //pinMode(3, OUTPUT);
  //pinMode(4,OUTPUT);
  //digitalWrite(LEDcol[pin], LOW); //default power off
 }
/*for (level=0; level>4; level++){  //setting the levels up, default is input, or not currently working as ground 
     pinMode(LEDlevel[level], INPUT);
 } */
//levels -
}
void loop(){
  //arraytest();
  //test2();
}
void arraytest(){
  pinMode (LEDlevel[3], OUTPUT);
  pinMode(LEDlevel[2], OUTPUT);
  pinMode(LEDlevel[1], OUTPUT);
  pinMode(LEDlevel[0], INPUT);
  
  for(int i=0; i<16; i++){
    digitalWrite(LEDcol[i],HIGH);
    delay (1000);
    digitalWrite(LEDcol[i], LOW);
    delay(500);
  }
}

void test2(){
pinMode(23,OUTPUT);  
pinMode (23, LOW);
digitalWrite(3, HIGH);
delay(500);
digitalWrite(3, LOW);
delay(500);
}
/*
"!" ist the light that is ever on
1 is on
0 is off

rows starting at the pointy end of the arduino

led 1works 1!oo
led2 works  o!1o
led3 works  0!01
led4 works, second row 1000
led5 works second row  0100
led 6 works second row 0010
led 7 works second row  0001

led8 works   third row 1000
led 9 works, third row 0100
led 10 works, third row 0010
led 11 works, third row 0001

led 12 works, fourth row 1000
led 13 works, fourth fow 0100
led 14 works, fourth row 0010
led 15 works, fourth row 0001

digitralWrite(0, LOW); does nothing.
taking "0" out of the setup loop changes nothing.

must sodder the second resistor on the other side, not on RXD  pin.
*/
