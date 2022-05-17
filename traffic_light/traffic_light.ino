int LEDPins[] = {2,4,7};
void setup() {
  // put your setup code here, to run once:
pinMode(LEDPins[0], OUTPUT);
pinMode(LEDPins[1], OUTPUT);
pinMode(LEDPins[2], OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
oneOnAtATime();
}

void oneOnAtATime(){
  int delayTime = 1000;
  for(int index = 0; index<3;index ++){
    digitalWrite(LEDPins[index], HIGH);
    delay(delayTime);
        digitalWrite(LEDPins[index], LOW);

  }
}
