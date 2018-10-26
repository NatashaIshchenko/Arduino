void setup() {
  Serial.begin(9600);
}

void loop() {
  // значение a считываем с потенциометр, оно находится в диапозоне [0,1023]
  float a = analogRead(A0);
  // b в диапозоне [0, 255], чем выше b, тем меньше будет delay => ярче будут светиться светодиоды
  float b = a/4;
  Serial.println(b);

  analogWrite(3, b); 
  analogWrite(5, b); 
  analogWrite(6, b);  

}
