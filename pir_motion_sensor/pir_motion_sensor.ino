int ledPin = 13;
int pirPin = 2;
int pirStart = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pirStart = digitalRead(pirPin);
  Serial.println(pirStart);

  if(pirStart == HIGH){
    digitalWrite(ledPin, HIGH);
    Serial.println();
  }else{
     digitalWrite(ledPin, LOW);
  }
}
