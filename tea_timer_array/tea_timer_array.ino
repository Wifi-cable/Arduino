
#include <Servo.h>
Servo myservo;
int pos =0;
//int i;
//int bin[4];

void setup(){ 
  pinMode(2, OUTPUT); //led1
  pinMode(3, OUTPUT); //led2
  pinMode(4, OUTPUT); //led4
  pinMode(5, OUTPUT); //led8
  pinMode(6, OUTPUT); //led0
  pinMode(9, OUTPUT);//grüner tester
}

void loop(){ 
  schleife();
} 
void schleife(){
   boolean mod;
    int bin[]={2,3,4,5};
     int j;
       int k=0;
  for (j=10;j>=0; j--){ //wiso geht er nie in die schleife? weil abbruch bedinung sofort erreicht war
      digitalWrite(9, HIGH);
  //fängt bei 10 an. gibt aber keinen pin 10. nur 5,4,3,2
    
    int i=j;
    mod= i%2;  //an welcher stelle muss das stehen? 
    while(i!=0) { //while zählt nicht hoch. ich brauche eine for schleife  sollte bei 2 anfangen, bis 5
                     
   if (mod=true){
  digitalWrite(bin[k], HIGH); //aber zählt das auch hoch?  oder geht dann immer die selbe lampe an?
    k=k+1;
    i=i/2;
    }
  else { 
    i=i/2;
    k=k+1;
    //digitalWrite(9, LOW);
  }
      delay (300);
      digitalWrite(9,LOW);
    }
    
      delay(1000);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      
      delay(500);
  }
  delay(500);  // später wieder verlängern
  digitalWrite(6, HIGH);
  delay (500);
  digitalWrite(6, LOW);

  
}



