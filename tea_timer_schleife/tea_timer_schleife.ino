int led1 = 2;
int led2 = 3;
int led4 = 4;
int led8 = 5;
int led0 = 6;
#include <Servo.h>
Servo myservo;
int pos =0;
int i;
bin[];

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
  for (j=10;j<=0; j--){ 
    int i=j;
    while (i!=0){
  
    bin[]={led8,led4,led2,led1};

      i=i/2; 
    }
      delay(1000);
      digitalWrite(led8, LOW);
      digitalWrite(led4, LOW);
      digitalWrite (led2, LOW);
      digitalWrite(led1, LOW);
  }
  digitalWrite(led0, HIGH);
  delay (1000);
  digitalWrite(led0, LOW);   
}


/*for (int k=0, i=j; i; i/=2) digitalWrite(bin[k++], i%2? HIGH:LOW);  */

/* for (int k=0, int i=j; i; i/=2) digitalWrite(bin[k++], i%2? HIGH:LOW); */
