int led1 = 2;
int led2 = 3;
int led4 = 4;
int led8 = 5;
int led0 = 6;
#include <Servo.h>
Servo myservo;
int pos =0;
int i;

void setup(){ 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led0, OUTPUT);
}

void loop(){ 
  schleife();
} 
void schleife(){
  int j;
  for (j=10,j<=0; j--;){ 
    int i=j;
    while (i!=0){
      eight();
      
      delay(1000);
      digitalWrite(led8, LOW);
      digitalWrite(led4, LOW);
      digitalWrite (led2, LOW);
      digitalWrite(led1, LOW);
      i=i/2; 
    }

  }
  digitalWrite(led0, HIGH);
  delay (1000);
  digitalWrite(led0, LOW);   
}


void eight(){ 
  if (i>=8){
  digitalWrite(led8, HIGH);
  four();
  two();
  one();
  }
}

void four(){
  if (i>=4){ 
    digitalWrite(led4,HIGH);
  }
}

void two(){
  if (i>=2){
    digitalWrite(led2, HIGH);
  }
}
void one(){
  if (i%2==1){
    digitalWrite(led1, HIGH);
  }
}
