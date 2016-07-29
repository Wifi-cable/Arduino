
#include <Servo.h>
Servo myservo;
int pos =0;
int aus = 0;  // button is off
const int knopf =10; //pushputton

//int i;
//int bin[4];

void setup(){ 
  pinMode(2, OUTPUT); //led1
  pinMode(3, OUTPUT); //led2
  pinMode(4, OUTPUT); //led4
  pinMode(5, OUTPUT); //led8
  pinMode(6, OUTPUT); //led0
  myservo.attach(7); //der servo
  pinMode(9, OUTPUT);//grüner tester
  pinMode(10, INPUT);  // an knopf
}

void loop(){ 
  schleife();
} 
void schleife(){
   int mod;
    int bin[]={2,3,4,5};
     int j;
     int s;
   aus= digitalRead(knopf);
if(knopf == HIGH){   
  for (j=10;j>=0; j--){ 
      
    int k=0;  
    int i=j;
    
    while(i!=0) { 
    mod= i%2;  //an welcher stelle muss das stehen?    ist gerade nie false, das ist ein problem, so gibts kein else...            
   if (mod==1){  //ohne boolean versuchen?  if (i%2==1)
  digitalWrite(bin[k], HIGH); 
    k=k+1;
    i=i/2;
    //digitalWrite(9, HIGH);
    
    }
  else { //else tritt nie ein. fehler im boolean
    i=i/2;
    k=k+1;
    
   /* digitalWrite(6, HIGH);
    delay (200);
    digitalWrite(6, LOW); */
    
  }
   mod=0;  
  //delay(500); 
    }
    
      delay(1000);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      //delay (900);
      //digitalWrite(9,LOW);
      delay(100);
  }
  delay(500);  // später wieder verlängern
  digitalWrite(6, HIGH);
  delay (1000);
  digitalWrite(6, LOW);
  delay(2000);

  for (s=0; s >=90; s++){
 myservo.write(pos);
    delay(100);
  }
}
}


