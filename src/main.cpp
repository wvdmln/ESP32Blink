#include <Arduino.h>
#define LED_PIN 4
int Periode = 2000;
float Frequency;
float Duty = 10;
int Aantijd;
int Uittijd;

void setup() {
  // put your setup code here, to run once:
  Serial.println ("Aangepaste Blink sketch");
  pinMode (LED_PIN, OUTPUT);
  Serial.begin (115200);

  Frequency = 1000.0/Periode;
  Serial.print ("Frequency = ");
  Serial.print (Frequency);
  Serial.println (" Hz");

  Aantijd = Periode * Duty /100;
  Uittijd = Periode - Aantijd;

  Serial.print ("Aantijd = ");
  Serial.print (Aantijd);
  Serial.println (" ms");
  
  Serial.print ("Uittijd = ");
  Serial.print (Uittijd);
  Serial.println (" ms");

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (LED_PIN, HIGH);
  delay(Aantijd);
  digitalWrite (LED_PIN, LOW);
  delay (Uittijd);
}