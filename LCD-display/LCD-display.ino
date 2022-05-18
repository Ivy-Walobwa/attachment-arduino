#include <lcd_i2c.h>


lcd_i2c lcd(0x3E,16,2); //The I2C communication for this LCD is 0x3E (HEX) or 62 (DEC), 16 is the number of the columns, 2 is the number of the rows

void setup() 
{
  // set up the LCD's number of columns and rows:
  lcd.begin();
  // Print a message to the LCD.
   lcd.setCursor(2,0);

  lcd.print("I am attached");
  lcd.setCursor(2,1);
  lcd.print("in EEE lab");

  delay(1000);
}

void loop() 
{


}
