
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
for(int i =0l i <= 3000; i++){
  delay(1000);
}
digitalWrite(relay, LOW);
}
