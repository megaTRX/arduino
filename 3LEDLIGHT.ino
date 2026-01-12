const int rledPin = 9;
const int yledPin = 8;
const int gledPin = 7;

void setup() {
  pinMode(rledPin, OUTPUT);
  pinMode(yledPin, OUTPUT);
  pinMode(gledPin, OUTPUT);
}

void loop() {
  digitalWrite(rledPin, HIGH);
  delay(3000);
  digitalWrite(rledPin, LOW);

  for (int i = 0; i < 3; i++) {
    digitalWrite(yledPin, HIGH);
    delay(500);
    digitalWrite(yledPin, LOW);
    delay(500);
  }

  digitalWrite(gledPin, HIGH);
  delay(3000);
  digitalWrite(gledPin, LOW);
}