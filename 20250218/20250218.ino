void setup() {
 pinMode(A0,INPUT);
 pinMode(3,OUTPUT);
 Serial.begin(9600);

}

void loop() {
int LDR=analogRead(A0);

Serial.print("A0(Giriş)=");
Serial.println(LDR);
if(LDR<350){
  digitalWrite(3,1);
}
else{
  digitalWrite(3,0);
}

}
