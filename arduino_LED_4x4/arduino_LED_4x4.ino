int ledPins[] = {2,3,4,5,6,7,8,9};
int delayTime = 1000; void setup() { for(int i = 0; i < 8; i++) pinMode(ledPins[i],OUTPUT);

}

void loop() { 

digitalWrite(ledPins[0], HIGH);
digitalWrite(ledPins[1], LOW);
digitalWrite(ledPins[2], HIGH);
digitalWrite(ledPins[3], LOW);
digitalWrite(ledPins[4], HIGH);
digitalWrite(ledPins[5], LOW);
digitalWrite(ledPins[6], HIGH);
digitalWrite(ledPins[7], LOW);
delay(delayTime);
digitalWrite(ledPins[7], HIGH);
digitalWrite(ledPins[6], LOW);
digitalWrite(ledPins[5], HIGH);
digitalWrite(ledPins[4], LOW);
digitalWrite(ledPins[3], HIGH);
digitalWrite(ledPins[2], LOW);
digitalWrite(ledPins[1], HIGH);
digitalWrite(ledPins[0], LOW);
delay(delayTime);



//4 x 4

//digitalWrite(ledPins[0], LOW);
//
//delay(delayTime);
//
//digitalWrite(ledPins[1], LOW);
//
//delay(delayTime);
//
//digitalWrite(ledPins[2], LOW);
//
//delay(delayTime);
//
//digitalWrite(ledPins[3], LOW);
//
//delay(delayTime);
//
//digitalWrite(ledPins[4], LOW);
//
//delay(delayTime);
//
//digitalWrite(ledPins[5], LOW);
//
//delay(delayTime);
//
//digitalWrite(ledPins[6], LOW);
//
//delay(delayTime);
//
//digitalWrite(ledPins[7], LOW);
//
//delay(delayTime);

}
