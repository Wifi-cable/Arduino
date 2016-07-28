
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
  int mod;
  int bin[]={2,3,4,5};
  int j;
       
  for (j=10;j>=0; j--)
  {
    int k=0;  
    int i=j;
    while(i!=0) 
    { 
      digitalWrite(bin[k++], i%2 ? HIGH : LOW); 
      i=i/2;
    }
    delay(1000);
  }
  delay(500);  // später wieder verlängern
  digitalWrite(6, HIGH);
  delay (1000);
  digitalWrite(6, LOW);
  delay(2000);
}
