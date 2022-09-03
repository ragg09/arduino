int VRx = A0;
int VRy = A1;
int SW = 2;

int ledx = 9;      // LED connected to digital pin 9
int analogx = A0;   // potentiometer connected to analog pin 3
int valx = 0;         // variable to store the read value

int ledy = 10;      // LED connected to digital pin 9
int analogy = A1;   // potentiometer connected to analog pin 3
int valy = 0;         // variable to store the read value

int xPosition = 0;
int yPosition = 0;
int SW_state = 0;
int mapX = 511.5;
int mapY = 511.5;

void setup() {
  Serial.begin(9600); 
  
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(SW, INPUT_PULLUP); 
  pinMode(ledx, OUTPUT);
  pinMode(ledy, OUTPUT);
  
}

void loop() {
  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  SW_state = digitalRead(SW);
  mapX = map(xPosition, 0, 1023, -512, 512);
  mapY = map(yPosition, 0, 1023, -512, 512);
  
  Serial.print("X: ");
  Serial.print(mapX);
  Serial.print(" | Y: ");
  Serial.print(mapY);
  Serial.print(" | Button: ");
  Serial.println(SW_state);
  
  valx = analogRead(analogx);  // read the input pin
  analogWrite(ledx, valx / 4);
  
  valy = analogRead(analogy);  // read the input pin
  analogWrite(ledy, valy / 4);
  
  byte sw_r = digitalRead(SW);
  
  if(sw_r == 0){
    digitalWrite(5, HIGH);
  }
  

  delay(300);
  
}
