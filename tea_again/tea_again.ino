
#include <Servo.h>
Servo myservo;
int pos_oben = 10;
int pos_unten = 90;
int aus = 0;  // 1button is off
const int knopf =10; //pushputton

//int i;
//int bin[4];

void setup(){ 
  pinMode(2, OUTPUT); //led1
  pinMode(3, OUTPUT); //led2
  pinMode(4, OUTPUT); //led4
  pinMode(5, OUTPUT); //led8
  pinMode(6, OUTPUT); //led0
  myservo.attach(8); //der servo
  pinMode(9, OUTPUT);//grüner tester
  pinMode(10, INPUT);  // an knopf
} //end setup

void loop(){ 
  schleife();
} //end loop 

void schleife(){ //were is the end?
  int mod;
  int bin[]={ 2,3,4,5  };
  int j;
  int s;
  aus= digitalRead(knopf); //fehler in den kabeln oder hier?
  long time;

  if(aus == HIGH){
    digitalWrite(9, LOW);
  
     
   for (j=10;j>=0; j--){ 
   
   int k=0;  
   int i=j;
   
   while(i!=0) { 
   mod= i%2;              
   if (mod==1){  
   digitalWrite(bin[k], HIGH); 
   //k=k+1;
   //i=i/2;
   
   }
   else { 
   digitalWrite(bin[k],LOW);
   
   
   } //end else
   k=k+1;
   i=i/2;
   mod=0;  
   //delay(500); 
   } //end while to create binary...
   
   delay(1000);
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   //delay (900);
   //digitalWrite(9,LOW);  
   delay(500);
   }  // end for schleife countdown 
   delay(500);  // später wieder verlängern
   digitalWrite(6, HIGH);
   delay (1000);
   digitalWrite(6, LOW);
   delay(2000); 

    //for (s=0; s <=90; s++){
     // myservo.write(pos_unten);
      //delay(100);
   // }

myservo.write(pos_unten);
    for (time=0;time<=22000; time++){
     int  j=2;//ersetzen, jeh schleife 4 sekunden
       // vieliecht die abfrage weg?  einfach jedes 4 x?  while weistergeier!=
        for (j=0; j<=4; j++){
          
          digitalWrite(bin[j],HIGH);
          delay (500);
          digitalWrite(bin[j],LOW);
          delay (500);
        }
      
       
        for (j=4; j>=0; j--){
          digitalWrite(bin[j],HIGH);
          delay(500);
          digitalWrite(bin[j], LOW);
          delay (500);
        }
     


    }


    

//myservo.write(pos_unten);
  } //dafu end if?

  else { 
    digitalWrite(9, HIGH);
    myservo.write(pos_oben);
  }  //end else
} //end schleife

