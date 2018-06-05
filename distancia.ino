#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);
long tiempo; 
long distancia;  
void setup() {
lcd.begin(16,2);
Serial.begin(9600);
pinMode(4, OUTPUT);
pinMode(5, INPUT);  
}
void loop() {
digitalWrite(5, LOW);
delayMicroseconds(5);
digitalWrite(5, HIGH);
delayMicroseconds(10);
tiempo=pulseIn(4, HIGH);
distancia=int(0.017*tiempo);
Serial.print(tiempo);
Serial.println(" cm");
  lcd.setCursor(0,0);
  lcd.print("@_MiguelRomeroG");
  lcd.setCursor(0,1);
  lcd.print("Distancia: ");
  lcd.setCursor(10,1);
  lcd.print(distancia);
  lcd.setCursor(12,1);
  lcd.print(" cm");
delay(1000); 
lcd.clear();  

}
