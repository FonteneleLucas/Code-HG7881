
//pins motors = direction_A-1A[0], speed_A-1B[1], direction_B-1A[2], speed_B-1B[3];
int pinMotors[] = {8, 9, 10, 11};

void setup() {
  for (int i = 0; i < sizeof(pinMotors); i++) {
    pinMode(pinMotors[i], OUTPUT);
  }
}

void loop() {
  go(0, 0);
  delay(1000); 
  go(255, 255);
  delay(1000);
  go(255, -255);
  delay(1000);
  go(-255, 255);
  delay(1000);
}

void go(int left, int right) {
    digitalWrite(pinMotors[0], left > 0 ? LOW : (left != 0 ? HIGH : LOW));
    analogWrite(pinMotors[1], left);
    
    digitalWrite(pinMotors[2], right > 0 ? LOW : (right != 0 ? HIGH : LOW));
    analogWrite(pinMotors[3], right);
}
