int ledPin = 13;
int sensorPin = A0;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue = analogRead(sensorPin);
int value = map(sensorValue, 0, 255, 0,5);
Serial.println(value);
if(value<3){
  
  digitalWrite(ledPin, HIGH);
}else{
    digitalWrite(ledPin, LOW);

}
}
