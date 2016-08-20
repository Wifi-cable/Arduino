#include<Servo.h>
Servo eyes;  // servo to move the owls eylids
const int sensor =A0;
const int red = 4;
const int yellow = 2;
const int green = 3;
//const int buzz=12;  //make buzzer analoge instead?
const int buzz = A1;
int serv=0;

int sensorVal; //now light sensor variable works


void setup (){ 
  pinMode(sensor, INPUT);
  pinMode (red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  eyes.attach(8);
 // pinMode(buzz, OUTPUT);  //the buzzer or speaker
 pinMode(buzz, OUTPUT);
  analogWrite(buzz, 40);  //buzzer in analog more arguments like amount?
  Serial.begin(9600);  //rate of data transmission 
/* mach die Zeile oben mal zu 
sensorVal= analogRead(sensor); // consistently global*/
}
void loop(){ 
 sensorVal= analogRead(sensor); // local? 
  light();
  //squeek();
  sreech();
  lightTest(); 
}
void light(){
  //int sensorVal=analogRead(sensor); //light sensor 

  if (sensorVal>=801){ //500== fairly dark
    digitalWrite (red, HIGH);
    delay(500);
    digitalWrite(red, LOW);
    delay(500);
  } 
  else { 
    if (sensorVal<=800 && sensorVal>=400){  // medium light
      digitalWrite(yellow, HIGH);
      delay(500);
      digitalWrite(yellow, LOW);
      delay(500);  
    }
    else {
      digitalWrite(green, HIGH);
      delay(500);
      digitalWrite(green, LOW);
      delay(500);
    }
  }
  /* //servotest
   eyes.write(0);
   delay(200);
   eyes.write(20);
   delay(200);
   */
}
void squeek(){
  //int sensorVal=analogRead(sensor); //light sensor 
  /*note  frequency
   c     262 Hz
   d     294 Hz
   e     330 Hz
   f     349 Hz
   g     392 Hz
   a     440 Hz
   b     494 Hz
   C     523 Hz*/
  if (sensorVal<=800){

    tone(buzz, 262);
    delay(300);
    noTone(buzz);
    delay(200);
    tone(buzz,262),
    delay(100);
    noTone(buzz);
    delay(5000);
  }
  else {    
    tone(buzz, 523);
    delay (3000);
    noTone(buzz);
    delay(10000);
  }
}
void sreech(){ // suposably  code that resembles this should produce screeching. practically it is the softes of clicking
  if (sensorVal>=600){
    analogWrite(buzz,200);
    delay(500);
    analogWrite(buzz,0);
    delay(500);
  }
}
 void lightTest(){  
  String test= "funst?"; //string to test the serial monitor, laptop is talking to serial
  Serial.println(sensorVal);  //read the level of light in my room 
  Serial.println(test);
  //return sensorVal;
}

