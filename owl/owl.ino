<<<<<<< HEAD
#include<Servo.h>
Servo eyes;  // servo to move the owls eylids
const int sensor =A0;
const int red = 4;
const int yellow = 2;
const int green = 3;
const int buzz=12;
int serv=0;
//const int sensorVal=analogRead(sensor); //light sensor does not seem to work here
int sensorVal;


||||||| merged common ancestors
  #include<Servo.h>
  Servo eyes;  // servo to move the owls eylids
  const int sensor =A0;
  const int red = 4;
  const int yellow = 2;
  const int green = 3;
  const int buzz=12;
  int serv=0;
  //const int sensorVal=analogRead(sensor); //light sensor does not seem to work here
  int sensorVal;
=======
  #include<Servo.h>
  Servo eyes;  // servo to move the owls eylids
  const int sensor =A0;
  const int red = 4;
  const int yellow = 2;
  const int green = 3;
  const int buzz=12;
  int serv=0;
  //const int sensorVal=analogRead(sensor); //light sensor does not seem to work here

>>>>>>> d566ffd2cfafc606e42135093b8604eb288cda7f
void setup (){ 
  pinMode(sensor, INPUT);
  pinMode (red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  eyes.attach(8);
  pinMode(buzz, OUTPUT);  //the buzzer or speaker
  Serial.begin(9600);  //rate of data transmission 
/* mach die Zeile oben mal zu 
sensorVal= analogRead(sensor); // consistently global*/
}
void loop(){ 
<<<<<<< HEAD
 sensorVal= analogRead(sensor); // local? 
  //light();
  //squeek();
  light();
  lightTest(sensorVal); 
||||||| merged common ancestors
 sensorVal= analogRead(sensor); // local? 
   //light();
   //squeek();
   light();
   lightTest();
=======
   int sensorVal= analogRead(sensor); // local? 
   //light();
   //squeek();
   light(sensorVal);
   lightTest(sensorVal);
>>>>>>> d566ffd2cfafc606e42135093b8604eb288cda7f
}
<<<<<<< HEAD
void light(){
  //int sensorVal=analogRead(sensor); //light sensor 

||||||| merged common ancestors
void light(){
//int sensorVal=analogRead(sensor); //light sensor 
   
=======
void light(int sensorVal){
//int sensorVal=analogRead(sensor); //light sensor 
   
>>>>>>> d566ffd2cfafc606e42135093b8604eb288cda7f
  if (sensorVal>=801){ //500== fairly dark
<<<<<<< HEAD
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
||||||| merged common ancestors
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
=======
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
>>>>>>> d566ffd2cfafc606e42135093b8604eb288cda7f
}
<<<<<<< HEAD
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

||||||| merged common ancestors
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
  
=======
void squeek(int sensorVal){
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
  
>>>>>>> d566ffd2cfafc606e42135093b8604eb288cda7f
    tone(buzz, 262);
    delay(300);
    noTone(buzz);
    delay(200);
    tone(buzz,262),
    delay(100);
    noTone(buzz);
    delay(5000);
  }
  else {    //not reading the light sensor. why?
    tone(buzz, 523);
    delay (3000);
    noTone(buzz);
    delay(10000);
  }
}
void sreech(){ 
}
<<<<<<< HEAD
 void lightTest(){  // so nicht
||||||| merged common ancestors
void sreech(){ }
void lightTest(){
=======
void sreech(int sensorVal){ }
void lightTest(int sensorVal){
>>>>>>> d566ffd2cfafc606e42135093b8604eb288cda7f
  String test= "funst?"; //string to test the serial monitor, laptop is talking to serial
  Serial.println(sensorVal);  //read the level of light in my room
  Serial.println(test);
  //return sensorVal;
}

