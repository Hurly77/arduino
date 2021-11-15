#include <LiquidCrystal.h>
#include <time.h>
#include <assert.h>

int rs = 12;
int rw = 11;
int e = 10;
int d4 = 5;
int d5 = 4;
int d6 = 3;
int d7 = 2;

String arr[6] {"Ground Control to Major Tom
Ground Control to Major Tom
"Take your protein pills", "and", "put your helmet on"
"Ground Control to Major Tom", ("ten", "nine", "eight", "seven", "six"
Commencing countdown, engines on "five", "four", "three"
Check ignition and may Gods love be with you (two, one, liftoff)}


LiquidCrystal lcd(rs, rw, e, d4, d5,d6, d7);

void setup()
{
  lcd.begin(16, 1);
}

void loop() { 
}