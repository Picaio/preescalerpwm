/*
000 - Parado
001 - 31Khz
010 - 3.9Khz
011 - 980 hz
101 - 245.1 hz
110 122,5 hz
111- 30,64 hz
*/


const byte PRESCALER2 = 0b0001;

int controlValue=0;
 
void setup() {
  TCCR2B = (TCCR2B & 0b11111000) | PRESCALER2;
  pinMode(3, OUTPUT);
}
 
void loop() {
  controlValue = analogRead(A0);
  analogWrite(3, controlValue/4);
  delay(500);
}
