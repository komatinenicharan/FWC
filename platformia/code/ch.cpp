#include<Arduino.h>

int dela = 1000;
int arr[5];

void funk(int a, int b , int c ) {
  int s = 0;
  int ca = 0;
  digitalWrite(5, a);
  digitalWrite(4, b);
  digitalWrite(3, c);


  s = (!a && !b && c) ||  (!a && b && !c) ||  (a && !b && !c) ||  (a && b && c);
  ca = (a && b) ||  (a && !b && c) || (!a && b && c);

  digitalWrite(8, s);
  digitalWrite(9, ca);
  Serial.print("\n");
  Serial.print(a);
  Serial.print(b);
  Serial.print(c);
  Serial.print("    ");
  Serial.print(s);
  Serial.print(ca);
  
  
}

void setup() {

  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  pinMode(8, OUTPUT);
  //Serial.begin(9600);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  funk( 0, 0, 0);
  delay(dela);
  funk( 0, 0, 1);
  delay(dela);
  funk( 0, 1, 0);
  delay(dela);
  funk( 0, 1, 1);
  delay(dela);
  funk( 1, 0, 0);
  delay(dela);
  funk( 1, 0, 1);
  delay(dela);
  funk( 1, 1, 0);
  delay(dela);
  funk( 1, 1, 1);
  delay(dela);
  
}
