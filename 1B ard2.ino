int pushButton=8;
int led=13;
int btn;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  trima();
  kirim();
}
void trima(){
    while(Serial.available()){
    btn=Serial.read();
    if(btn==0){
      digitalWrite(led,LOW);
    }
    if(btn==1){
      digitalWrite(led,HIGH);
    } 
  }
}
void kirim(){
  int kondisiButton=digitalRead(pushButton);
  Serial.write(kondisiButton);
}
