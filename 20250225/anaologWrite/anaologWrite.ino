void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTOUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<=255;i+=10;){
  anaologWrite(5,i);
  delay(200);
}
}
