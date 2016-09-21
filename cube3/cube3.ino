int LEDcol[]={1,2,5,6,7,8,9,10,11,12,13,14,15,16,19,20}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={23,24,25,26 };  //4 levels analoge

void setup(){
for (int pin=0; pin<16; pin ++ ){  //setting up the colums
  pinMode(LEDcol[pin], OUTPUT);
  
  pinMode(3, OUTPUT);
  pinMode(4,OUTPUT);
  //digitalWrite(LEDcol[pin], LOW); //default power off
 }
/*for (level=0; level>4; level++){  //setting the levels up, default is input, or not currently working as ground 
     pinMode(LEDlevel[level], INPUT);
 } */
//levels -
}
void loop(){
  //arraytest();
  test2();
}
void arraytest(){
  pinMode (LEDlevel[0], OUTPUT);
  
  for(int i=0; i<16; i++){
    digitalWrite(LEDcol[i],HIGH);
    delay (1000);
    digitalWrite(LEDcol[i], LOW);
    delay(500);
  }
}

void test2(){
digitalWrite(0, HIGH);
delay(500);
digitalWrite(0, LOW);
delay(500);
}
