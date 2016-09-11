void setup(){
pinMode (5, OUTPUT);  //ground for column right
pinMode (6, OUTPUT);  //ground for column center
pinMode(8, OUTPUT); //for column left
// A7 has a short
//so does A6

pinMode (A5, INPUT);  //row clossest to arduino
pinMode (A3, OUTPUT);  // row center
pinMode (A4, INPUT);  //row fartherst from arduino
}
void loop(){ 
//digitalWrite(8,LOW);  
//digitalWrite(5, LOW); 
//digitalWrite(6, LOW);
digitalWrite(A3, HIGH);
delay(500);
digitalWrite(A3, LOW);
delay(500);
}
/*as long as something is marked output, it works as ground. no need to put it as low.
anything marked as input is inactive */
