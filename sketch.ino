#include <LiquidCrystal_I2C.h>
#define LCD_ADDR  0x27
#define LCD_ROWS 2 
#define LCD_COLUMNS 16
LiquidCrystal_I2C lcd(LCD_ADDR,LCD_ROWS,LCD_COLUMNS);
void setup() {
  lcd.begin(16,2);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello");

  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
