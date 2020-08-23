#define DELAY 2
#define brightMax 256
void setup() {
  // put your setup code here, to run once:
  /*
    pinMode(pin, mode);
    pin:아두이노 디지털 핀 번호
    mode:OUTPUT, INPUT 또는 INPUT_PULLUP
    no return
  */
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  digitalWrite(10, HIGH);
  int bright = 1;
  */
  int i = 0;
  for(i=0; i<brightMax; i++) {
    analogWrite(10, i);
    delay(DELAY);
  }
  for(; i>=0; i--) {
    analogWrite(10, i);
    delay(DELAY);
  }
  /*
  analogWrite(10, 100);
  delay(1000);
  digitalWrite(10, LOW);
  analogWrite(10, 255);
  delay(1000);
  */
}
