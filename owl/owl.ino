#include<Servo.h>
Servo eyes;  // servo to move the owls eylids
const int sensor =A0;
const int red = 4;
const int yellow = 2;
const int green = 3;
const int buzz=9;  //the buzzer 
const int loud=12;  // more volume
const int quiet= 13;  // less volume
int sleep;
int wake;

int sensorVal; //now light sensor variable works


void setup (){ 
  pinMode(sensor, INPUT);
  pinMode (red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, INPUT);
  eyes.attach(8);
  //pinMode(quiet,OUTPUT);
  pinMode(buzz, OUTPUT);  //the buzzer or speaker
 //pinMode(loud, INPUT);
  //analogWrite(loud, 40);  //buzzer in analog more arguments like amount?
  eyes.attach(7);
  Serial.begin(9600);  //rate of data transmission 

sensorVal= analogRead(sensor);
}
void loop(){ 
 sensorVal= analogRead(sensor);  
  light();
  squeek();
  
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
    }    //input==  not active
        //output+ low== ground
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
   pinMode(quiet,INPUT);
   pinMode(loud,INPUT);
     sleep=0;  //servo positions
     wake=90;
  
   
  if (sensorVal<=800 && sensorVal >=200){
    eyes.write(sleep);
    
 if (sensorVal<500){//wake or move the servo to move the eyelids
 int i;
 int j=0;
   for (i=sleep; i< wake; i+=1){ //open the eyes slowly
   eyes.write(i);
   delay(15);
   }
    while(j>4){
    eyes.write(i-4); // blink the eyes
    delay(50);
    eyes.write(i+4);
    delay(50);
    j+=1;
  }
   delay(10000);
   
   for (i=wake; i>=sleep; i-=1){ 
   eyes.write(i);
   delay (20);
   }
 }
 
 else{//sleep
  pinMode(quiet,OUTPUT);
  digitalWrite(quiet,LOW);
    tone(buzz, 262);
    delay(200);
    noTone(buzz);
    delay(20);
    tone(buzz,262),
    delay(600);
    noTone(buzz);
    delay(5000);
 } 
    
  } else if (sensorVal<=200)  { 
      noTone(buzz);
     }
    
  
  else { //louder  shocked awake
  
    pinMode(loud,OUTPUT); 
   pinMode(quiet,INPUT); //loud
    digitalWrite(loud, LOW);
    tone(loud, 523);  //set buzz as input and 12 as output
    delay (3000);
    noTone(loud);
    tone(loud,494);
    delay(1000);
    noTone(loud);
    delay(10000);
  }
}


 void lightTest(){  
  String test= "funst?"; //string to test the serial monitor, laptop is talking to serial
  Serial.println(sensorVal);  //read the level of light in my room 
  Serial.println(test);
  //return sensorVal;
}

