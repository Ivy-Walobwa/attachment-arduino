
int relay = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(relay, OUTPUT);
  digitalWrite(relay, LOW);

  attachInterrupt(0, lightON, RISING);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void lightON(){
digitalWrite(relay, HIGH);
for(int i =0; i <= 3000; i++){
  delay(100);
}
digitalWrite(relay, LOW);
}
