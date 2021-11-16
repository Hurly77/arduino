int r = 6;
int g = 5;
int b = 3;
int last;
int current;
int rgb[3]{r, g, b};
String s[3]{"R ", "G ", "B "};
int val = 0;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  for (int i = 0; i < 3; i++)
  {
    val = analogRead(rgb[i]);
    if (last)
    {
      analogWrite(last, 0);
    }
    Serial.println(s[i] + val);
    delay(50);
    analogWrite(rgb[i], 255);
    delay(300);

    last = rgb[i];
  }
}