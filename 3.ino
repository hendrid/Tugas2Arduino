int pinLdr=A5;
int ldr=0;
int motorPinr=8;
int motorPinl=7;
int speed=0;
void setup() { 
   pinMode(motorPinr,OUTPUT);
   pinMode(motorPinl,OUTPUT);  
   Serial.begin(9600); 
} 
void loop() { 
  ldr=analogRead(pinLdr);
  Serial.print("Nilai LDR = ");
  Serial.print(ldr);
  speed=map(ldr,0,1023,0,255);
      if(ldr<500){
        analogWrite(motorPinl, speed);
        analogWrite(motorPinr, 0); 
        Serial.print("\t <kiri< Kecepatan Motor = ");
        Serial.println(speed);
      }
      else{
        analogWrite(motorPinl, 0); 
        analogWrite(motorPinr, speed); 
        Serial.print("\t >kanan> Kecepatan Motor = ");
        Serial.println(speed);
      }
  delay(100);
}
