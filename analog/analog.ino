int pin = 6;
int speed = 1;
int max = 255;
int min = 0;
int timeout = 1000;
int rate = 2;

void setup()
{
  pinMode(pin, OUTPUT);
}

void loop()
{
  int i = 0;
  for (i; i <= max; i += rate)
  {
    analogWrite(pin, i);
    delay(speed);
  }
  for (i; i >= min; i -= rate)
  {
    analogWrite(pin, i);
    delay(speed);
  }
  delay(timeout);
}