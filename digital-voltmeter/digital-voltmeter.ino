//#include <LiquidCrystal_I2C.h>
#include <stdio.h>

#include <lcd_i2c.h>

lcd_i2c lcd(0x3E,16,2);

float volt; 
int voltPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(voltPin, INPUT);
  lcd.begin();
}

void loop() {
  
  volt = analogRead(voltPin);
  volt = (volt/1024.0) * 5000;
  volt = volt/1000; 
  char myStringe[64]= {' '};

  int val_int = (int) volt;   // compute the integer part of the float
  float val_float = (abs(volt) - abs(val_int)) * 100000;
  int val_fra = abs((int)val_float);

  sprintf (myStringe, "%d.%d", val_int, val_fra); 
  

  // LCD
  lcd.clear();
  lcd.setCursor(0,0); 
  lcd.print("DIGITAL V. METER"); 
  lcd.setCursor(0,1); 
    lcd.print("VOLTAGE="); 
  lcd.setCursor(9,1); 

  lcd.print(myStringe); 

  delay(1000);
}
