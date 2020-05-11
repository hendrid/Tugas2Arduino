void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println("Ketikkan Y untuk menyalakan lampu");
  Serial.println("Ketikkan N untuk mematikan lampu");
  Serial.println("");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    int baca=Serial.read();
    if(baca=='y' || baca=='Y'){
      digitalWrite(13,HIGH);
      Serial.println("Lampu Nyala");
    }
    if(baca=='n' || baca=='N'){
      digitalWrite(13,LOW);
      Serial.println("Lampu Mati");   
    }
  }
}
