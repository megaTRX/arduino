void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
 // digitalWrite(5, HIGH);
  analogWrite(5, 40);
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);
} 
