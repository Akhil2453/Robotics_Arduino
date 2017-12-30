/*
Interfacing Joystick module

In this tutorial, we will be interfacing joystick module
to arduino and reading its value

----------Connections---------------

    Arduino 5V --> 5V|VCC on Joystick Module
    Arduino GND --> GND on Joystick Module

    As the Joystick is a highr version of a potentiometer
    we will be using analog pins to read the values
    
    Arduino pin A0 --> Vrx
    Arduino pin A1 --> Vry
    
 */
//initialise 2 variable with analog pins on Arduino
int x = A0;
int y = A1;

//initialise variables to read the values from the module
int xV=0, yV=0;

void setup() {
  // put your setup code here, to run once:
  //initialise Serial Communication
  Serial.begin(9600);
  Serial.println("Joystick Values -- comming in.......");
  //make the pins as INPUT to recieve the signal
  //this is an optional step and can be ignored

  //pinMode(x, INPUT);
  //pinMode(y, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //store the values read from the sensor in the variables decelared
  xV = analogRead(x);
  yV = analogRead(y);

  //Print the values on the serial moitor

  Serial.print("X Co-ordinate : ");
  Serial.println(xV);
  Serial.print("Y Co-ordinate : ");
  Serial.println(yV);

  delay(250);

  /*
   * You can map the vales down to the range 0-10 in the foll way
   * xV = map(xV, 0, 1023, 0, 10);
   * yV = mapr(yV, 0, 1023, 0 ,10);
   */

}
