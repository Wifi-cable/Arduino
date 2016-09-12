//colums + 
int LEDcol[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1}; //digital outputs connected to positive or collums of LEDs
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
  for (pin=0; pin <16; pin++){  //turn the comuns on, all of them
      digitalWrite(LEDcol[pin], HIGH);
     }
  level=0;  //maybe not necary
  while (level<4){ // turn all coums on
      
     //set on level as ground
    pinMode(LEDlevel[level],OUTPUT);
    digitalWrite(level, LOW);
    delay (500);
    pinMode(level, INPUT); //and not ground anymore
    level++;
  }
  //pin:(digitalWrite( pin, LOW);)pin+=pin;  that is not the way to turn all comumn pins off again
     for (pin=0; pin <16; pin++){    //turn all columns off again
      digitalWrite(LEDcol[pin], LOW);
      delay(250);
     }
  
}  

void animation1(){ //

  while (level>4){ // turn all coums on
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
   for (pin=16; pin<=0; pin--){
     digitalWrite(LEDcol[pin], LOW);
   }
   
   }  //end else
     while (level>4){ // turn all coums on
    pinMode(LEDlevel[level],INPUT);
   level++;
  }
  }  
  
void animation2(){ 
   while (level>4){ // turn all 4 levels to ground
    pinMode(LEDlevel[level],OUTPUT);
    digitalWrite(LEDlevel[level],LOW);
    level++;
  }
  
  for (int a=0; a<5; a++ ){  //trying to turn first the fron tow of colums on, than move backwards
/* first turn on pin 0 to 3 (delay and off)
than turn on 4 to 7(delay and off) 
      "       8- 11
      "        11- A 1
      use the array index to do that. */
      
    
  }
  while (level>4){ //turns everything off
    pinMode(LEDlevel[level], INPUT);
    level-=level;
  }
  }
  
void animation3(){  //all outside on?
  for (level=0; level>4; level++){  //setting the levels up, default is input, or not currently working as ground 
     pinMode(LEDlevel[level], OUTPUT);
    
     }
   
 }  
 void animation3side(){
    for (level=0; level>4; level++){  //setting the levels up, default is input, or not currently working as ground 
     digitalWrite(LEDlevel[level], LOW);
    }  //change to sides only, mittdle two levels
   digitalWrite(3,HIGH); 
   digitalWrite(0,HIGH); 
   digitalWrite(12,HIGH); 
   digitalWrite(A1,HIGH);
   delay(20);
   digitalWrite(3,LOW); 
   digitalWrite(0,LOW); 
   digitalWrite(12,LOW); 
   digitalWrite(A1,LOW);
   delay(20);
   
    for (level=0; level>4; level++){  //no more ground
     digitalWrite(LEDlevel[level], HIGH);
    }
  
   
 }
 void animation3topbottom(){ 
       delay(20);
   digitalWrite(A2, LOW);
   digitalWrite(A5, LOW);//top and bottom layer are ground now
   digitalWrite(1,HIGH);
   digitalWrite(2,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(7,HIGH); 
   digitalWrite(8,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(13,HIGH);
   digitalWrite(A0,HIGH);
       delay(20);
   digitalWrite(1,LOW);
   digitalWrite(2,LOW);
   digitalWrite(4,LOW);
   digitalWrite(7,LOW); 
   digitalWrite(8,LOW);
   digitalWrite(11,LOW);
   digitalWrite(13,LOW);
   digitalWrite(A0,LOW);
 }
