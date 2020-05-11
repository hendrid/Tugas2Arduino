#define echoPin 6 
#define trigPin 7
#define buzzerPin 4
long duration,distance;   
void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);   
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);   
  digitalWrite(trigPin, LOW); 
  duration = pulseIn(echoPin, HIGH); 
  distance = duration/58.2;
  int f=1098-distance;
  tone(buzzerPin,f);
  Serial.print("Jarak : ");
  Serial.print(distance);
  Serial.println(" cm");
}
