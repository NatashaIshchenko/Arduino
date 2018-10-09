void setup() {
  Serial.begin(9600);
  for(int i=8;i<=12;i++)
    pinMode(i,OUTPUT);
}

void loop() {
  float a = analogRead(A0);
  float b = a*5/1024;
  
  Serial.println(a);
  Serial.println(b);
  Serial.println("---");
  
  if (b>=0 and b<1)
    digitalWrite(8, HIGH);
  else if (b>=1 and b<2)
    digitalWrite(9, HIGH);
  else if (b>=2 and b<3)
    digitalWrite(10, HIGH);
  else if (b>=3 and b<4)
    digitalWrite(11, HIGH);
  else if (b>=4 and b<=5)
    digitalWrite(12, HIGH);  

  delay(100);
  for(int i=8;i<=12;i++)
    digitalWrite(i,LOW);
}
