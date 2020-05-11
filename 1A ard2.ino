int led=13;
int mystr;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()){
    mystr=Serial.read();
    if(mystr==0){
      digitalWrite(led,LOW);
    }
    if(mystr==1){
      digitalWrite(led,HIGH);
    } 
  }
}
