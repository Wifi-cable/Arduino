
#include <Servo.h>
Servo myservo;
int pos_oben = 10;
int pos_unten = 100;
int aus = 0;  // 1button is off
const int knopf =10; //pushputton

//int i;
//int bin[4];

void setup(){ 
  pinMode(2, OUTPUT); //d2 led1
  pinMode(3, OUTPUT); // d3 led2
  pinMode(4, OUTPUT); //d4 led4
  pinMode(5, OUTPUT); //d5 led8
  pinMode(6, OUTPUT); //d6 green led0
  myservo.attach(7); //der servo d8      auf 7!
  pinMode(8, OUTPUT);// yellow.
  //pinMode(9, OUTPUT);
  pinMode(10, INPUT);  // on off button  d10 knopfende
} //end setup

void loop(){ 
  schleife();
} //end loop 

void schleife(){ //were is the end?
  int mod;
  int bin[]={ 2,3,4,5  };
  int j;
  int s;
  aus= digitalRead(knopf); //pushbutton off
  long time;
  myservo.write(pos_oben); //top position

  if(aus == HIGH){
    digitalWrite(8, LOW);
  delay(500);
     
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
   
   delay(800);
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   //delay (900);
   //digitalWrite(9,LOW);  
   delay(500);
   }  // end for schleife countdown 
   delay(500);  // später wieder verlängern
   digitalWrite(8, HIGH);
   delay (1000);
   //digitalWrite(8, LOW);
   //delay(500); 


myservo.write(pos_unten);
    for (time=0;time<=23; time++){
      //digitalWrite(6, HIGH);
      //int  j=2;//ersetzen, jeh schleife 4 sekunden
       // vieliecht die abfrage weg?  einfach jedes 4 x?  while weistergeier!=
        for (j=0; j<=3; j++){
          
          digitalWrite(bin[j],HIGH);
          delay (500);
          digitalWrite(bin[j],LOW);
          delay (500);
        }
      
       
        for (j=3; j>=0; j--){
          digitalWrite(bin[j],HIGH);
          delay(500);
          digitalWrite(bin[j], LOW);
          delay (500);
        }
     


    }
digitalWrite(8,LOW);
myservo.write(pos_oben);
    digitalWrite(6,HIGH);
    delay (3000);
    digitalWrite(6, LOW);
  } 

  else { 
    //digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
   // myservo.write(pos_oben);
  }  //end else
} //end schleife

