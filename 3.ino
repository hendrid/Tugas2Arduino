int pinLdr = A5;
int ldr = 0;
int en1 = 5, en2 = 6;
int in[] = {9, 8, 4, 3};
int speed = 0;
void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(in[i], OUTPUT);
  }
  Serial.begin(9600);
}
void loop() {
  ldr = analogRead(pinLdr);
  Serial.print("Nilai LDR = ");
  Serial.print(ldr);
  speed = map(ldr, 0, 1023, 0, 255);
  if (ldr < 500) {
    analogWrite(en1, speed);
    analogWrite(en2, speed);
    digitalWrite(in[0], LOW);
    digitalWrite(in[1], HIGH);
    digitalWrite(in[2], LOW);
    digitalWrite(in[3], HIGH);
    Serial.print("\t <kiri< Kecepatan Motor = ");
    Serial.println(speed);
    delay(5);
  }
  else {
    analogWrite(en1, speed);
    analogWrite(en2, speed);
    digitalWrite(in[0], HIGH);
    digitalWrite(in[1], LOW);
    digitalWrite(in[2], HIGH);
    digitalWrite(in[3], LOW);
    Serial.print("\t >kanan> Kecepatan Motor = ");
    Serial.println(speed);
    delay(5);
  }
}
