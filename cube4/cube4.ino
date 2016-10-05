//int LEDcol[]={1, 16,2,3,4,5,6,7,8,9,10,11,12,13,14,15 }; // Mary's cube
//int side[]={16,2,4,7,8,11,13,14 }; // Mary's side[] array
//int side[]={1,2,4,7,8,11,13,14}; // side[] translated to LEDcol[] indices

int LEDcol[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={A2,A3,A4,A5 };  //4 levels analog
int level,
    pin;

void setup(){
   for(level=0; level<=3; level++){  //setting the levels up, default is input, or not currently working as ground 
     pinMode(LEDlevel[level], INPUT);
     digitalWrite(LEDlevel[level], LOW);
   }  //input pull up? pull down? low for savty reasons?

  for (int pin=0; pin<=15; pin++){  //setting up the colums
     pinMode(LEDcol[pin], OUTPUT);
     digitalWrite(LEDcol[pin], LOW);
   }
 }

void loop(){
  setup();
  rows();
  off();
  delay(500);
  rows2();
  off(); 
  delay(500);
  frame();
  off(); 
  delay(500);
  stripes();
  off();
  delay(3000); 

}
void off(){
  for(level=0; level<=3; level++){  //setting the levels up, default is input, or not currently working as ground 
     pinMode(LEDlevel[level], INPUT);
   }  //input pull up? pull down? low for savty reasons?
  for (pin=0; pin<16; pin++){
     digitalWrite(LEDcol[pin], LOW);
   }
}

void rows(){
    for(level=0; level<=3; level++){  
     pinMode(LEDlevel[level], OUTPUT);
   }
  delay(200);
  for(pin=0;pin<=3; pin ++){
    digitalWrite(LEDcol[pin], HIGH);
    delay(500);
  }
  delay (1000);
  
  for(pin=0;pin<=3; pin ++){
    digitalWrite(LEDcol[pin], LOW);

  }
  delay(200);
  
  for (pin=4; pin<=7; pin++){  
    digitalWrite(LEDcol[pin], HIGH);
    delay(500);
  }
  delay(1000);
    for (pin=4; pin<=7; pin++){
      digitalWrite(LEDcol[pin], LOW);
  }
  delay(200);
    for (pin=8; pin<=11; pin++){    
      digitalWrite(LEDcol[pin], HIGH);
      delay(500);
  }
  delay(1000);
    for (pin=8; pin<=11; pin++){
      digitalWrite(LEDcol[pin], LOW);
  }
  delay(200);
    for (pin=12; pin<=15; pin++){
      digitalWrite(LEDcol[pin], HIGH);
      delay(500);
  }
  delay (1000);
    for (pin=12; pin<=15; pin++){
      digitalWrite(LEDcol[pin], LOW);
  }
}


void rows2(){
  //pinMode(18,OUTPUT);
  for(level=0; level<=3; level++){  //setting the levels up, default is input, or not currently working as ground 
     pinMode(LEDlevel[level], OUTPUT);
   }
  int count,
      i,
      pins=0;
  for (count=0; count<=3; count++){//repeat four times
 /* three times  second counter variable
 
 add 4  to the variable used for the pin
 third variable used for this, not the counter of either*/
  for (i=0; i<=3; i++){
    digitalWrite(LEDcol[pins], HIGH);
    delay(200);
    //digitalWrite(LEDcol[pins], LOW);    
    pins=pins+4;
    delay(200);
    
  }
  pins=pins-4;
  delay(1000);//start new   um that is bugged. it messes up the pins math.
  int p=pins;
   for (i=4; i>=0; i--){
     //int p=pins;
    digitalWrite(LEDcol[p], LOW);
     p=p-4;  
    //end new
  

  
  }
  pins=pins-11;
} //end big for loop
} //end rows

void frame(){
  for (int j=0; j<=8;j++){
  for (int i=0; i<=150; i++){
  frame1();
  frame2();
  }
  off();
  center();
  off();
  }
}

void frame1(){// top part
 for(level=0; level<=3; level++){   //all levels on
     pinMode(LEDlevel[level], OUTPUT);
   }
   int pin=0;
   for (int i=0; i<=3; i++){
    
    digitalWrite(LEDcol[pin],HIGH);
    if (pin%2==1){// high 0, 3,12,15 hopefully
      pin=pin+9;
    }
    else{ 
      pin=pin+3;
    }
   }
   delay(5);
   pin=0;
   for (int i=0; i<=3; i++){
    
    digitalWrite(LEDcol[pin],LOW);
    
    if (pin%2==1){// high 0, 3,12,15 hopefully
      pin=pin+9;
      
    }
    else{ 
      pin=pin+3;
    }
   }  
   //delay(200);
}
void frame2(){// off level 1, 2,   pins 1,2,  4,7 ,8,11,  13, 14
  pinMode(LEDlevel[1], INPUT);
  pinMode(LEDlevel[2], INPUT);
int side[]={1,2,4,7,8,11,13,14};
//int side[]={16,2,4,7,8,11,13,14 };
  
  for (int pos=0; pos<=8; pos++){
    digitalWrite(LEDcol[side[pos]], HIGH);
    }
     delay(5);
   for (int pos=0; pos<=8; pos++){
        digitalWrite(LEDcol[side[pos]], LOW);
    }
}  
void stripes(){
  for(int i=0; i<=15; i++){
    digitalWrite(LEDcol[i], HIGH);
  }
  for (int l=0; l<=3; l++){
    pinMode(LEDlevel[l], OUTPUT);
    delay(600);
    pinMode(LEDlevel[l], INPUT);
  }
  delay(500);
  for (int l=3; l>=0; l--){
    pinMode(LEDlevel[l], OUTPUT);
    delay(600);
    pinMode(LEDlevel[l], INPUT);
  }
  
}

void center(){
 pinMode(LEDlevel[1],OUTPUT);
 pinMode(LEDlevel[2],OUTPUT);
   int p=5;
  while(p<11){
    digitalWrite(LEDcol[p], HIGH);
    if(p%2==0){
      p=p+3;
    }
    else{
      p=p+1;
    }
    
  }
  delay(1000);
}

void varp(){
  
}
void varp1() {
  pinMode(LEDlevel[1],OUTPUT);
}
void varp2(){
}
