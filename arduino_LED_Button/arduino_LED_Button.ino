void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(13, INPUT);
  pinMode(12, INPUT);
}
void loop(){
  byte sw = digitalRead(13);
  byte sw2 = digitalRead(12);
  if(sw == 0 && sw2 == 0){
    digitalWrite(2, HIGH);
       digitalWrite(3, LOW);
     digitalWrite(4, LOW);
  }
  else if(sw == 0){
    digitalWrite(3, HIGH);
  }
   else if(sw2 == 0){
    digitalWrite(4, HIGH);
  }
  else{
     digitalWrite(2, LOW);
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);

  }
}
