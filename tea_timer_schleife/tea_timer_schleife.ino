int led1 = 2;
int led2 = 3;
int led4 = 4;
int led8 = 5;
int led0 = 6;
#include <Servo.h>
Servo myservo;
int pos =0;

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
      if (i%2==1){
        digitalWrite(led1, HIGH);
        delay (500);
        digitalWrite(led1, LOW);
      }
      else if (i%4==2) {
        digitalWrite (led2, HIGH);
        delay (500);
        digitalWrite (led2, LOW); 
      }
      else if (i%8==4) {
        digitalWrite(led4, HIGH);
        delay(500);
        digitalWrite(led4, LOW);
      }
      else if (i>=8){
        digitalWrite(led8, HIGH);
        delay (500);
        digitalWrite(led8, LOW);
      }
      
      i=i/2; 
    }

  }
  digitalWrite(led0, HIGH);
  delay (1000);
  digitalWrite(led0, LOW);   
}



