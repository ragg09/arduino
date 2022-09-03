int ledPins[] = {2,3,4,5,6,7,8,9};
int delayTime = 300; 
void setup() { 
  for(int i = 0; i < 8; i++) 
  pinMode(ledPins[i],OUTPUT);
}

void loop(){
  byte x =0;
  for(; x <= 7; x++){
    digitalWrite(ledPins[x], HIGH);
    delay(delayTime);
  }
  x=7;
  for( ; x >= 0; x--){
    digitalWrite(ledPins[x], LOW);
    delay(delayTime);
  }

}
