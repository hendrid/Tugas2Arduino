int pushButton=2;
int led=13;
int btn;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pushButton,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  kirim();
  trima();
}

void kirim(){
  int kondisiButton=digitalRead(pushButton);
  Serial.write(kondisiButton);
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
