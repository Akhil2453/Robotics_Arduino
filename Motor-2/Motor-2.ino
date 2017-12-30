/*
  Motor Interfacing

  Interface a DC mtor with Arduino
  (without Motor Driver)

  This can be done in 3 ways:
  2. This code shows the second method:
    Connections ::
    the two terminals(wire||poles||points) of motors are :
    m1 AND m2

    m1 --> pin 9
    m2 --> pin 10
*/

// initialise variables with both pins
int m1 = 9;
int m2 = 10;
void setup() {
  // put your setup code here, to run once:
  //make the pins as ouput pins
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Clockwise Rotation
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  delay(1500);
  //Anti-clockwise Rotation
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  delay(1500);
}
