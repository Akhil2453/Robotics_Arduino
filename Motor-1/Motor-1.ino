/*
Motor Interfacing

Interface a DC mtor with Arduino
(without Motor Driver)

This can be done in 3 ways:
 1. This code shows the first method:
    Connections ::
    the two terminals(wire||poles||points) of motors are : 
    m1 AND m2

    m1 --> pin 13
    m2 --> Gnd
 */

//initialise a variable with pin 13
int m1 = 13;
void setup() {
  // put your setup code here, to run once:
  // Make the pin as Output
  pinMode(m1, HIGH);
  // can also be written as pinMode(pin, 1) OR pinMode(pin, OUTPUT)


}

void loop() {
  // put your main code here, to run repeatedly:
  // Motor will run in 1 second intervals
  digitalWrite(m1, 1);
  delay(1000);
  digitalWrite(m1, 0);
  delay(1000);
}
