// 서보모터 각도 제어

#include <Servo.h> // Servo 클래스 
const int SERVO = A0;
Servo servo;

void setup() {
  pinMode(SERVO, OUTPUT);
  servo.attach(SERVO);
}

void loop() {
  servo.write(0); // 0도 설정
  delay(2000);
  servo.write(90); // 90도 설ㅈ어
  delay(2000);
  servo.write(180); // 180도 설정
  delay(2000);
}