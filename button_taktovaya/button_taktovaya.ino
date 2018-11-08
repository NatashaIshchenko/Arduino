void setup() {
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  boolean a = digitalRead(8);
  Serial.println(a);
  digitalWrite(12, a);
}
