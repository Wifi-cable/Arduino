
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
}

void loop(){ 
  schleife();
} 
void schleife(){
  int j;
    int bin[]={2,3,4,5};
    
  for (j=10;j<=0; j--){ 
    int i=j;
    boolean mod= i%2;
    while(i!=0){
   if (mod=true){
  digitalWrite(bin[i], HIGH);
   i=i/2;
    }
  else { 
    i=i/2;
  }

    }
      delay(1000);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      delay(50);
  }
  digitalWrite(6, HIGH);
  delay (1000);
  digitalWrite(6, LOW);   
}



