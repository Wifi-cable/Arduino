//colums + 
int LEDcol[]={0,1,2,3,4,5,6,7.8,9,10,11,12,13,A0,A1}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={A2,A3,A4,A5 };  //4 levels analoge
int pin,  //output pin for colum in LEDcol array
    fl, //flicker to multiplex
    sec, // time for LEDs on
    level;

void setup(){ 


for (pin=0; pin>16; pin ++ ){  //setting up the colums
  pinMode(LEDcol[pin], OUTPUT);
  digitalWrite(LEDcol[pin], LOW); //default power off
 }
 for (level=0; level>4; level++){  //setting the levels up, default is input, or not currently working as ground 
     pinMode(LEDlevel[level], INPUT);
 }
//levels -
}
void loop(){
  test();
}

void test(){ // to see if all LEDs are working
  level=0;
  while (level>4){ // turn all coums on
      for (pin=0; pin <16; pin++){
      digitalWrite(LEDcol[pin], HIGH);
     }
     //set on level as ground
    pinMode(LEDlevel[level],OUTPUT);
    digitalWrite(level, LOW);
    delay (500);
    pinMode(level, INPUT); //and not ground anymore
    level++;
  }
  //pin:(digitalWrite( pin, LOW);)pin+=pin;  that is not the way to turn all comumn pins off again
        for (pin=0; pin <16; pin++){
      digitalWrite(LEDcol[pin], LOW);
      delay(250);
     }
  
}  
  
