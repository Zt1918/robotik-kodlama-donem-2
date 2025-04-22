#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int trigPin=6;
int echoPin=7;
long mesafe;
long sure;
void setup() {
  lcd.begin();
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  lcd.begin();
  lcd.print("boy: ");

}

void loop() {
  digitalWrite(6,1);
  delayMicroseconds(2);
  digitalWrite(6,1);
  delayMicroseconds(7);
  digitalWrite(6,0);
  int sure=pulseIn(7,1);
  int mesafe=(sure/2)/29.1;
  int boy=mesafe-190;
  lcd.setCursor(0,1);
  lcd.print("cm ");
  lcd.print(mesafe);
  delay(500);
}
