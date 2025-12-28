void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
 
}

void loop() {
 
  int ar = analogRead(A0); // analogRead값은 포트번호 하나이다.
  if(ar>200) 
      digitalWrite(13,HIGH);
  else if(ar < 100)
    digitalWrite(13,LOW);
  Serial.println("analog value : " + (String)ar);
  delay(10);
}
