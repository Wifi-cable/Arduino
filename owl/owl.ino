  #include<Servo.h>
  Servo eyes;  // servo to move the owls eylids
  const int sensor =A0;
  const int red = 4;
  const int yellow = 2;
  const int green = 3;
  int serv=0;
 
void setup (){ 
  pinMode(sensor, INPUT);
  pinMode (red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  eyes.attach(8);
  //Serial.begin(300);  //rate of data transmission 
}
void loop(){ 

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
    //servotest
    eyes.write(0);
    delay(200);
    eyes.write(20);
    delay(200);
}
