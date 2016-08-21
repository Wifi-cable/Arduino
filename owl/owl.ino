#include<Servo.h>
Servo eyes;  // servo to move the owls eylids
const int sensor =A0;
const int red = 4;
const int yellow = 2;
const int green = 3;
//const int buzz=12;  //make buzzer analoge instead?
//const int buzz = A1;
const int buzz=9;// buzzer, no resistor
// digital I/O to connect different resistors to the other terminal of buzzer
const int laut= 11; // red red brown resisor
const int luise= 12;// the red-red-yellow
int serv=0;
// free pins are 13,11,10.(7,6,5)
int sensorVal; //now light sensor variable works


void setup (){ 
  pinMode(sensor, INPUT);
  pinMode (red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, INPUT);
  eyes.attach(8);
  // initially, turn both return resistors to buzzer off
  pinMode(laut,INPUT);
  pinMode(luise,INPUT);
  //analogWrite(buzz, 40);  // unnecessary, tone() will hijack buzz pin no matter what
  Serial.begin(9600);  //rate of data transmission 
/* mach die Zeile oben mal zu 
sensorVal= analogRead(sensor); // consistently global*/
}
void loop(){ 
 sensorVal= analogRead(sensor); // local? 
  light();
  squeek();
  //sreech();
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
    pinMode(luise,OUTPUT);  // keep laut as input, make luise output
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
    pinMode(laut,OUTPUT);  // keep luise as input, make laut output
    tone(buzz, 523);  //set buzz as input and 12 as output
    delay (3000);
    noTone(buzz);
    delay(10000);
  }
  // preemptively turn both pins off
  pinMode(laut,INPUT);
  pinMode(luise,INPUT);
}
void sreech(){ // suposably  code that resembles this should produce screeching. practically it is the softes of clicking
  if (sensorVal>=600){
    
for (int i=0; i<=155; i++){ 
    analogWrite(buzz, i);
    delay (500);
    digitalWrite(buzz, LOW);
    delay (200);
    String is=" i = ";
    
    Serial.println(is + i);  
   
  }  
    
    /*int s;
    for (s=0; s<=255; s++){ //loop to see if i can hear that buzzer
    
    analogWrite(buzz,s);
    delay(500);
    analogWrite(buzz,0);
    delay(500);
    digitalWrite(green, HIGH); 
    //debug the loop. is it in the loop?
    Serial.println(s);
  }
  digitalWrite(green, LOW);
  delay (1000);  */
  /*  D zu kurzem Bein von der LED, langes Bein von der LED zu 220 Ohm, 220 Ohm zu 5V.*/
  
  delay(5000);
  }
}
 void lightTest(){  
  String test= "funst?"; //string to test the serial monitor, laptop is talking to serial
  Serial.println(sensorVal);  //read the level of light in my room 
  Serial.println(test);
  //return sensorVal;
}

