  #include<Servo.h>
  Servo eyes;  // servo to move the owls eylids
  const int sensor =A0;
  const int red = 4;
  const int yellow = 2;
  const int green = 3;
  const int buzz=12;
  int serv=0;
 
void setup (){ 
  pinMode(sensor, INPUT);
  pinMode (red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  eyes.attach(8);
  pinMode(buzz, OUTPUT);//the buzzer or speaker
  //Serial.begin(300);  //rate of data transmission 
}
void loop(){ 

   //light();
   squeek();
}
void light(){
int sensorVal=analogRead(sensor); //light sensor 
   
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
/*note  frequency
  c     262 Hz
  d     294 Hz
  e     330 Hz
  f     349 Hz
  g     392 Hz
  a     440 Hz
  b     494 Hz
  C     523 Hz*/
  int b;
  //for (b=0; b>=10 ; b++){
    tone(buzz, 262);
    delay(500);
    noTone(buzz);
    delay(500);
 // }
}
