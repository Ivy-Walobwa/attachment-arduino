int ledPin = 13;
float temp; 
int tempPin = 2;
void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
    pinMode(tempPin, INPUT);


}

void loop(){
  temp = analogRead(tempPin);
 temp = (temp/1024.0) * 5000;
 float cel = temp /10;
  Serial.print ("TEMPERATURE =  ");
  Serial.print(cel);
    Serial.print ("*C");
    Serial.println();
    if(cel > 215.00){
      digitalWrite(ledPin, HIGH);
    }else{
            digitalWrite(ledPin, LOW);

    }
    delay(1000);

}
