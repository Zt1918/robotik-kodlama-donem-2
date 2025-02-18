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
  digitalWrite(4,0);
  digitalWrite(5,0);
}
else if(LDR<450){
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
}
else{
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
}


}
