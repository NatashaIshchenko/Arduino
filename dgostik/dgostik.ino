void setup() {
  Serial.begin(9600);
}

void loop() {
  float x = analogRead(A1);
  float y = analogRead(A0);
  Serial.print(x); Serial.print("  "); Serial.println(y);
  delay(10);
}
