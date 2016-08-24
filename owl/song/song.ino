//#include "pitches.h"  //do i need this? 
const int t=9;  //t for tone, or the buzzer 
const int loud=12;  // more volume
const int quiet= 13;  // less volume
void setup(){ 
  pinMode(t, OUTPUT);
}

void loop(){ 
  song();
}

void song(){
   int c1=263;
   int d=294;
   int e=330;
   int f=349;
   int g=392;
   int a=440;
   int h=494;
   int c=523;
  
   
   pinMode(loud,INPUT);
   pinMode(quiet,OUTPUT);
   digitalWrite(quiet, LOW);
   //char note[]={'c' , 'd' , 'e' , 'f' ,'g' , 'a' , 'b' , 'c'  };
   //int freq[]={262,294,330,349,392,440,494,523};
   
  /* tone(t,f,250);
    x();
   tone(t,e,250);
   x();
   tone(t,e,250);
   x();
   tone(t,d,250);  */
   noTone(t);    // debugg the top part clicks but produces no "tone" frequency.
   delay(250);
   tone(t, 440);
   delay(500);
   noTone(t);
   delay(200);
   
   pinMode(loud, OUTPUT);
   digitalWrite(loud, LOW);
   pinMode(quiet, INPUT);
   tone(t, 263);
   delay(500);
   noTone(t);
  
   // f e e d / c ff ee d/ d gg ee aa ff  ff ee aa ff  ee d
    }
    void x(){
    noTone(t);
    }
    
     /*note  frequency
   c     262 Hz
   d     294 Hz
   e     330 Hz
   f     349 Hz
   g     392 Hz
   a     440 Hz
   h     494 Hz
   C     523 Hz*/
   
   
