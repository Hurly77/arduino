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

String arr[19] {"ground control...", " to major tom",
"take your protein pills", "and", "put your helmet on",
"ground control..", "to major tom", "ten", "nine", "eight", "seven", "six"
"commencing countdown, engines on", "five", "four", "three",
"check ignition and may gods love be with you","two", "one", "liftoff"};

LiquidCrystal lcd(rs, rw, e, d4, d5,d6, d7);


void setup()
{
  lcd.begin(16, 1);
}

void loop() { 
  for(int i = 0; i < 17; i++){
    arr[i];
    lcd.print(arr[i]);
    delay(1500);
    lcd.clear();
    if(i > 17){
      i = 0;
    }
  }
}