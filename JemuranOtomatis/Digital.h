void Digital() {
  hujanD = digitalRead(12);
  Serial.print("hujan = ");
  Serial.print(hujanD);
  Serial.print("       ");
  saklar1 = digitalRead(8);
  Serial.print("switc 1 = ");
  Serial.print(saklar1);
  Serial.print("       ");
  saklar2 = digitalRead(7);
  Serial.print("switc 2 = ");
  Serial.println(saklar2);

  if (hujanD == 1 && saklar1 == 1) {//tidak hujan
    delay(100);
    digitalWrite(IN_3, HIGH);
    digitalWrite(IN_4, LOW);
    digitalWrite(13, LOW);
  }
  if (hujanD == 1 && saklar1 == 0) {
    digitalWrite(IN_3, LOW);
    digitalWrite(IN_4, LOW);
    digitalWrite(13, LOW);
  }
  if (hujanD == 0 && saklar2 == 1) {// saat hujan
    delay(100);
    digitalWrite(IN_3, LOW);
    digitalWrite(IN_4, HIGH);
    digitalWrite(13, HIGH);
  }
  if (hujanD == 0 && saklar2 == 0) {
    digitalWrite(IN_3, LOW);
    digitalWrite(IN_4, LOW);
    digitalWrite(13, HIGH);
  }
}
