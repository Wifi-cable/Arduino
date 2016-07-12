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
void loop(){
 digitalWrite(led8, HIGH);//10
 digitalWrite(led2, HIGH);
 delay(1000);
 digitalWrite(led2, LOW);
 
 digitalWrite(led8, HIGH);//9
 digitalWrite(led1, HIGH);
  delay(1000);
  
  digitalWrite(led1, LOW);  //8
  delay (1000);      
  
  digitalWrite(led8, LOW);   //7
  digitalWrite(led4, HIGH);  
  digitalWrite(led2, HIGH);
  digitalWrite(led1, HIGH);
  delay (1000);
  
  digitalWrite(led1, LOW);  //6
  delay (1000);
  
  digitalWrite(led2, LOW);//5
  digitalWrite(led1, HIGH);
  delay (1000);
  
  digitalWrite(led1, LOW); //4
  delay (1000);
  
  digitalWrite(led4, LOW);//3
  digitalWrite(led2, HIGH);
  digitalWrite(led1, HIGH);
  delay(1000);
  
  digitalWrite(led1, LOW);  //2
  delay(1000);
  
  digitalWrite(led2, LOW); //1
  digitalWrite(led1, HIGH);
  delay(1000);
  
  digitalWrite(led0, HIGH);
  delay(4000);
  digitalWrite(led0, LOW);
 }
