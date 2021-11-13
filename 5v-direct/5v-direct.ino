int readPin = A3;
int readVal;
int baud = 9600;
int delayTime = 500;
float v2;

void setup()
{
  pinMode(readPin, INPUT);
  Serial.begin(baud);
}

void loop()
{
  readVal = analogRead(readPin);
  v2 =(5./1023.)*readVal;
  Serial.println(v2);
  delay(delayTime);
}