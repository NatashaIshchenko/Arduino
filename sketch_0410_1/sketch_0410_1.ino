void setup() {
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  for(int i=7;i<=11;i++){
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
}
