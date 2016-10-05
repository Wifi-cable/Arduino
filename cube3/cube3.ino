int LEDcol[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1}; //digital outputs connected to positive or collums of LEDs
//int LEDcol[]={1,2,5,6,7,8,9,10,11,12,13,14,15,16,19,20}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={A2,A3,A4,A5 };  //4 levels analog

int level,
    pin;

void setup()
{
    for (int pin=0; pin<=15; pin++)
    {  //setting up the colums
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

void loop()
{
    pinTest();
    off();
/* arraytest();
 off();
 test2();
  off();
  test3();
  off();
  pattern();
  off();
 // test3();
  //animation6(); */
}

void arraytest(){
  pinMode (LEDlevel[3], OUTPUT);
  pinMode(LEDlevel[2], OUTPUT);
  pinMode(LEDlevel[1], OUTPUT);
  pinMode(LEDlevel[0], OUTPUT);
  
  for(int i=0; i<16; i++){
    digitalWrite(LEDcol[i],HIGH);
    delay (1000);
    digitalWrite(LEDcol[i], LOW);
    delay(500);
  }
}

void test2(){
//pinMode(LEDlevel[0],OUTPUT); 

  //pinMode(18, OUTPUT);  //top
  //pinMode(17, OUTPUT);  //bottom
  //pinMode(16,OUTPUT);    //does not exist
  pinMode(19, OUTPUT);  //second from top ???
  pinMode(20, OUTPUT);  //not in existance or has a short ???
  //pinMode (24, LOW);
  digitalWrite(6, HIGH); // ???
  delay(500);
  digitalWrite(6, LOW); // ???
  delay(500);
}
/*
"!" ist the light that is ever on
1 is on
0 is off

rows starting at the pointy end of the arduino
LED zero comes after 1 and does not function well?

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

void pattern (){
  pinMode(LEDlevel[0], OUTPUT);
  pinMode(LEDlevel[1], OUTPUT);
  int a;
  for ( a=0; a<=3; a++){
  digitalWrite(LEDcol[a], HIGH);
  delay (800);
  digitalWrite(LEDcol[a], LOW);
  delay(500);
  }
 // a=a-1;
  /*for (a=3; a>=15; a+4){
    digitalWrite(LEDcol[a], HIGH);
    delay(500);
    digitalWrite(LEDcol[a],LOW);
    delay(250);
    a=a+4;
  
  } */
  
  //a=a-1;
  for(a=15; a<=12; a--){
    digitalWrite(LEDcol[a], HIGH);
    delay(500);
    digitalWrite(LEDcol[a],LOW);
    delay(250); 
  }
 // a=a+1;
  for( a=12; a==0; a-4){
        digitalWrite(LEDcol[a], HIGH);
    delay(500);
    digitalWrite(LEDcol[a],LOW);
    delay(250); 
    a=a-4;
  }
}
void test3(){
  pinMode(21, OUTPUT); 
  /* try all pins for levels
  24 does not react
  23 does not react
  22 does not react
  21 does not react but it should
  20 does not exist should react
  19 top level
  18 top level??
  17 does not exist
  16 does not exist
  */
  digitalWrite(6,HIGH); // ???
  delay(500);
  digitalWrite(6,LOW); // ???
  delay(500);
}
 void test4(){
   for(int level=0; level<=3; level++){
   pinMode(LEDlevel[level], OUTPUT);
 }
   
   for(int pin=0; pin<=15; pin++){
     digitalWrite(LEDcol[pin], HIGH);
     delay (250);
   }
   delay(5000);
   
   for(int pin=15; pin>=0; pin--){
     digitalWrite(LEDcol[pin], LOW);
     delay(250);
   }
   delay (1000);
 }
 
 void test5(){
    for(int pin=0; pin<=15; pin++){
     digitalWrite(LEDcol[pin], HIGH);
     delay(200);
   }
    for(int level=0; level<=3; level++){
   pinMode(LEDlevel[level], OUTPUT);
   delay(1000);
 }
  for(int level=3; level>=0; level--){
   pinMode(LEDlevel[level], INPUT);
 }
   
 }
 void animation6(){ //does not work yet
  level=0;
  while (level<4){ // turn all coums on
    pinMode(LEDlevel[level],OUTPUT);
    digitalWrite(level, LOW);
    level++;
  }
  if (pin==0){
    for (pin=0; pin>16; pin++){
      digitalWrite(LEDcol[pin], HIGH);
      }
      delay(500);
    }
    else{
   for (pin=16; pin!=0; pin--){
     digitalWrite(LEDcol[pin], LOW);
   }
   
   }  //end else
     level=0;
     while (level<4){ // turn all coums on
    pinMode(LEDlevel[level],INPUT);
   level++;
  }
  off();
  }  

void off() 
{
    for(int level=0; level<4; level++)
    {  //setting the levels up, default is input, or not currently working as ground 
	pinMode(LEDlevel[level], INPUT);
	digitalWrite(LEDlevel[level],LOW);
    }
    for (int pin=0; pin<16; pin++)
    {
	digitalWrite(LEDcol[pin], LOW);
    }
}

void pinTest()
{
    for (int z=0; z<=3; z++)
    {
	pinMode(LEDlevel[z], OUTPUT);
	for(int y=0; y<=15; y++)
	{
	    digitalWrite(LEDcol[y], HIGH);
	    delay(500);
	    digitalWrite(LEDcol[y], LOW);
	    delay(250);
	}
	pinMode(LEDlevel[z], INPUT);
	delay(250);
    }
}
