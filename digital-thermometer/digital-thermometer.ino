//#include <LiquidCrystal_I2C.h>
#include <stdio.h>

#include <lcd_i2c.h>

lcd_i2c lcd(0x3E,16,2);

float temp; 
int tempPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(tempPin, INPUT);
  lcd.begin();
}

void loop() {
  
  temp = analogRead(tempPin);
  temp = (temp/1024.0) * 5000;
  char myStringe[64]= {' '};

  int val_int = (int) temp;   // compute the integer part of the float
  float val_float = (abs(temp) - abs(val_int)) * 100000;
  int val_fra = abs((int)val_float);

  sprintf (myStringe, "%d.%d", val_int, val_fra); 
  
//  serial
  Serial.print ("TEMPERATURE =  ");
  Serial.print(myStringe);
  Serial.print ("*C");
  Serial.println();

  // LCD
  lcd.clear();
  lcd.setCursor(0,0); 
  lcd.print(myStringe); 
  lcd.print("C");
  delay(1000);
}
