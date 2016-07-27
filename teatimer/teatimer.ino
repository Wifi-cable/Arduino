int led1 = 1;
int led2 = 2;
int led4 = 3;
int led8 = 4;
int led0 = 5;
  int J=10;
  int i = 0;
  int k = 0;  // das scheint so nicht zu wollen. die variablen machen nix
  // sind scheinbar keine globalen varablen...
void setup(){ 
           pinMode(led1, OUTPUT);
           pinMode(led2, OUTPUT);
           pinMode(led4, OUTPUT);
           pinMode(led8, OUTPUT);
           pinMode(led0, OUTPUT);
         }
         
void loop(){count();}         
void  count(){ 
  int j=10; // springt es wieder auf 10 zurück? oder wird es überschrieben
  if (J==0){
    digitalWrite(led0, HIGH);  // abbruch existiert schon
    delay (2000);
    digitalWrite(led0, LOW);
  }  // wo selbst auf rufen?
    else{ 
     if (k==0 ){  // 
       j=j-1;
   }
   else { // j als lokale variable statt k?
     i = j%2; //mod brauch ich. 
     k = j/2;// ist int also keine nachkomma stelle
     // aber dann machts nix...
     j = k;  //existiert noch? ja. 
       // wo die if j>=8 LED8
      //elsif j>=4  LED4
      // else --- if j>=2 LED2     else LED1
     // und die LEDs zum leuchten bringen wo die if abfragen hin
     // kontrollieren ob die nötigen LEDs gleichzeitig angehen
     }
    }
  
 
} 

