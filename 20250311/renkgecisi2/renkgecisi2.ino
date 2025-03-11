 int r=6;
 int b=5;
 int g=3;
void setup() {
   pinMode(r, OUTPUT);
   pinMode(b, OUTPUT);
   pinMode(g, OUTPUT);
}

void loop() {

analogWrite(rled,200);
analogWrite(bled,0);
analogWrite(gled,255);
delay(1000);

analogWrite(rled,128);
analogWrite(bled,0);
analogWrite(gled,0);
delay(1000);


analogWrite(rled,0);
analogWrite(bled,255);
analogWrite(gled,255);
delay(500);


analogWrite(rled,128);
analogWrite(bled,128);
analogWrite(gled,0);
delay(1000);

}
