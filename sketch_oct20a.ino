void setup() {

pinMode(3,1);
}

void loop() {
  digitalWrite(3,1);
  delayMicroseconds(33);
  digitalWrite(3,0);
  delayMicroseconds(33);
}
