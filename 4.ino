#define echoPin 6 
#define trigPin 7
#define buzzerPin 5
long duration,distance;   
void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);
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
  analogWrite(buzzerPin,(1118-distance)/4.38);
  Serial.print("Jarak : ");
  Serial.print(distance);
  Serial.println(" cm");
}
