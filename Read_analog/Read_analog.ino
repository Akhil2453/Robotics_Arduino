/*
   This program demostrates how to read values from the analog pin

   This is one way to read the sensor
   This helps to maintain different variables and values read into them

   If the sensor OR module, you are trying to interface using Analog pins
   have 3 pins:  VCC,GND,S OR 5V/G/S OR +/-/DO or in any similar
   combination

   5V/VCC/+  -->  5V of Arduino
   GND/G/-   -->  Gnd of Arduino

   S/Sig/D0/A0 --> any Analog Pin of Arduino(A0-A5)
*/

//initialise a variable to use the analog pin

const int r = A1;    //put in the pin number that you have connected your module to
int red = 0;   //variable to store the read values

void setup() {
  // put your setup code here, to run once:
  //pinMode is not necesaary to put at all, but is a good practice to use it
  pinMode(r, INPUT);

  //Initialise the Serial Monitor
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  red = analogRead(r);
  Serial.print(" The value read from analog pin is ");
  Serial.println(red);
}
