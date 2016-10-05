int LEDcol[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1}; //digital outputs connected to positive or collums of LEDs

int LEDlevel[]={A2,A3,A4,A5 };  //4 levels analog
int level,
    pin;

void setup(){
  for (int pin=0; pin<=15; pin++){  //setting up the colums
    pinMode(LEDcol[pin], OUTPUT);
   }
 }

void loop(){
 //rows();
  //off();
 //rows2();
 off();
 frame();

}
void off(){
  for(level=0; level<=3; level++){  //setting the levels up, default is input, or not currently working as ground 
     pinMode(LEDlevel[level], INPUT);
   }
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
    delay(100);
    //digitalWrite(LEDcol[pins], LOW);    //how to make it more like rows?  by not turning it LED after led, instead having a delay where?
    pins=pins+4;
    delay(200);
    
  }
  delay(1000);//start new   um that is bugged. it messes up the pins math.
  int p=pins;
   for (i=4; i>=0; i--){
     //int p=pins;
    digitalWrite(LEDcol[p], LOW);
     p=p-4;  // um nope. still nope
    //end new
  

  //pins=pins-15;
  //subtract 11 from the pin variable subtracting 12 does not work.  that is because the loop keeps counting till it realizes "oh, 4 IS bigger than 3" computers are stupid
  }
  pins=pins-15;
} //end big for loop
} //end rows

void frame(){
  for (int i=0; i<=20; i++){
  frame1();
  frame2();
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
   delay(10);
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
// and off again. same loops if they work? just with LOW?
 /* why is it not working yet? the code keept resetting it. fixed.
 */   
}
void frame2(){// off level 1, 2,   pins 1,2,  4,7 ,8,11,  13, 14
  pinMode(LEDlevel[1], INPUT);
  pinMode(LEDlevel[2], INPUT);
  int side[]={16,2,4,7,8,11,13,14 };
  
  for (int pin=0; pin<=8; pin++){
    digitalWrite(side[pin], HIGH);
    }
     delay(10);
   for (int pin=0; pin<=8; pin++){
        digitalWrite(side[pin], LOW);
    }
}  
