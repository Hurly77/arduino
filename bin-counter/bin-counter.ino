int const length = 4;

int bins[length] = {0, 0, 0, 0};
int pins[length] = {8, 6, 4, 2};
int pace = 1500;

void setup(){
  for(int i = 0; i < length; i++){
    pinMode(pins[i], OUTPUT);
  }
}

void flip(){
  for(int i = 0; i < length; i++){
    if(bins[i] == 1){
      bins[i] = 0;
      digitalWrite(pins[i], LOW);
    } else {
      bins[i] = 1;
      digitalWrite(pins[i], HIGH);
      break;
    }
  }
}

void loop(){
  flip();
  delay(pace);
}