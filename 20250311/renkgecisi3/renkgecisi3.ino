 int r=6;
 int b=5;
 int g=3;
void setup() {
   pinMode(r, OUTPUT);
   pinMode(b, OUTPUT);
   pinMode(g, OUTPUT);
}

void loop() {

for(int i=0; i<=255; i++){
  analogWrite(6,i);
  analogWrite(5,255);
  analogWrite(3,255);
  delay(10);
}
for(int i=255; i<=0; i++){
  analogWrite(6,i);
  delay(10);
}
for(int i=0; i<=255; i++){
  analogWrite(5,i);
  analogWrite(6,255);
  analogWrite(3,255);
  delay(10);
}
for(int i=255; i<=0; i++){
  analogWrite(5,i);
  delay(10);
}
for(int i=0; i<=255; i++){
  analogWrite(3,i);
  analogWrite(5,255);
  analogWrite(6,255);
  delay(10);
}
for(int i=255; i<=0; i++){
  analogWrite(3,i);
  delay(10);
}
}
