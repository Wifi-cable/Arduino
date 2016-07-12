int led1 = 1;
int led2 = 2;
int led4 = 3;
int led8 = 4;
int led0 =5;
void setup(){ 
           pinMode(led1, OUTPUT);
           pinMode(led2, OUTPUT);
           pinMode(led4, OUTPUT);
           pinMode(led8, OUTPUT);
           pinMode(led0, OUTPUT);
         }
void loop(){ // sollte blinken. aber blinken war nicht das ziel
  digitalWrite (led1, HIGH);
  delay (1000);
  digitalWrite (led1, LOW);  //streichen wenn es funtzt
  delay(1000); 
  int J = 10;
  int i = 0;
  int k = 0;
  
  if (J==0){
    digitalWrite(led0; HIGH);
    delay (2000);
  }
    else{ 
      if (j>=8){
        digitalWrite(led8; HIGH)
        delay(1000);
     int i =j%2;
     int k= j/2;// gut und jetzt die richtien leuchten...
     }
    }
  }
 
} 
