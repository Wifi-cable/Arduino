  const int sensor =A0;
  const int red = 4;
  const int yellow = 2;
  const int green = 3;
  
 
void setup (){ 
  pinMode(sensor, INPUT);
  pinMode (red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(300);  //rate of data transmission 
}
void loop(){ 

  /*digitalWrite(red,HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(yellow, HIGH);
  delay (500);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(500);
  */
   int sensorVal=analogRead(sensor);
   
  if (sensorVal>=801){ // fairly dark
  digitalWrite (red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
    } 
else { 
 if (sensorVal<=800 && sensorVal>=400){  //very dark
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
}
