void setup() {
  // put your setup code here, to run once:
  
  // visualCode 단축키: ctrl + shift + p -> ar + serial + Monitor
  /*
    example1
    브레드보드 미사용
    ao: analog output-> pin number(A0)
    g -> gnd
    + -> 5V
    주고받는 비트수
    Serial.begin(115200);
  */
  
  /*
    example2
    pinMode(13, OUTPUT);
  */

  /*
    example3
    pinMode(10, INPUT);
    pinMode(7, OUTPUT);
  */

  
  //example4
    Serial.begin(115200);
    pinMode(10, INPUT);
    pinMode(7, OUTPUT);
}

boolean digitalRead10HIGHFlg = false;
void loop() {
  // put your main code here, to run repeatedly:
  
  /*
    example1
    Serial.println(analogRead(A0));
    delay(10);
  */
  
  /*
    example2  
    int wantedbrightExecuteMinNumber = 80;
    int analogReadA0 = analogRead(A0);
    if(wantedbrightExecuteMinNumber <= analogReadA0) {
      digitalWrite(13, HIGH);
    } else {
      digitalWrite(13, LOW);
    }
  */
  
  /*
    example3
    if(digitalRead(10) == HIGH) {
      digitalWrite(7, HIGH);
    } else {
      digitalWrite(7, LOW);
    }
  */

  //example4
  int digitalRead10 = digitalRead(10);
Serial.println(digitalRead10);
  if(digitalRead10 == HIGH) {
    delay(1000);
    digitalRead10HIGHFlg = !digitalRead10HIGHFlg;
Serial.println(digitalRead10HIGHFlg);
    if(digitalRead10HIGHFlg) {
      digitalWrite(7, HIGH);
    } else {
      digitalWrite(7, LOW);
    }
  }
}
