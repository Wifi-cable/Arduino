int led1 = 2;  //d1 digital 1
int led2 = 3;
int led4 = 4;
int led8 = 5;
int led0 =6;
#include <Servo.h>
Servo myservo;
int pos =0;
void setup(){ 
           pinMode(led1, OUTPUT);
           pinMode(led2, OUTPUT);
           pinMode(led4, OUTPUT);
           pinMode(led8, OUTPUT);
           pinMode(led0, OUTPUT);
           myservo.attach(7);
           myservo.write(90);
         }
void loop(){
 digitalWrite(led8, HIGH);//10
 digitalWrite(led2, HIGH);
 delay(1500);
 digitalWrite(led2, LOW);
 
 digitalWrite(led8, HIGH);//9
 digitalWrite(led1, HIGH);
  delay(1500);
  
  digitalWrite(led1, LOW);  //8
  delay (1500);      
  
  digitalWrite(led8, LOW);   //7
  digitalWrite(led4, HIGH);  
  digitalWrite(led2, HIGH);
  digitalWrite(led1, HIGH);
  delay (1500);
  
  digitalWrite(led1, LOW);  //6
  delay (1500);
  
  digitalWrite(led2, LOW);//5
  digitalWrite(led1, HIGH);
  delay (1500);
  
  digitalWrite(led1, LOW); //4
  delay (1500);
  
  digitalWrite(led4, LOW);//3
  digitalWrite(led2, HIGH);
  digitalWrite(led1, HIGH);
  delay(1500);
  
  digitalWrite(led1, LOW);  //2
  delay(1500);
  
  digitalWrite(led2, LOW); //1
  digitalWrite(led1, HIGH);
  delay(1500);
  digitalWrite(led1, LOW);
  delay (1500);
  digitalWrite(led0, HIGH);  //0 time.
  delay(2000);
  digitalWrite(led0, LOW);
  delay(500);
  for (pos=10; pos>=160; pos +=1){
 myservo.write(pos);
  delay(20); 
}
  for(pos = 160; pos>=10; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  delay(1500);
 }
