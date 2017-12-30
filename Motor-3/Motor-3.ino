/*
  Motor Interfacing

  Interface a DC mtor with Arduino
  (without Motor Driver)

  This can be done in 3 ways:
  3. This code shows the third method:
    Connections ::
    the two terminals(wire||poles||points) of motors are :
    ma1 AND ma2

    ma1 --> MA1 screw terminal of Motor Driver
    ma2 --> MA2 screw terminal of Motor Driver

    Arduino pin 9(ma1) --> A1 on Motor Driver
    Arduino pin 10(ma2) --> A2 on Motor Driver

    Arduino 5V --> VCC on Motor Driver
    Arduino GND --> GND on Motor Driver

    Battery Snap Red wire --> + screw terminal on Motor Driver
    Battery Snap Black Wire --> - screw terminal on Motor Driver
    
*/

//initialise variables with Arduino Pins
int ma1 = 9;
int ma2 = 10;
void setup() {
  // put your setup code here, to run once:
  // Make the pins as OUTPUT
  pinMode(ma1, HIGH);
  pinMode(ma2, HIGH);
  //Initialising Serial communcation
  //setting baud rate to 9600 (baud rate ==> the speed of communication
  //between arduino and the computer)
  Serial.begin(9600);
  //Printing on the Serial Monitor
  Serial.println("Hello World");
  Serial.println("Starting Motor");
}

void loop() {
  // put your main code here, to run repeatedly:
  // Rotate motor clockwise
  Serial.println("Clockwise");
  digitalWrite(ma1, HIGH);
  digitalWrite(ma2, LOW);
  delay(1500);
  // Rotate motor anti-clockwise
  Serial.println("Anti-Clockwise");
  digitalWrite(ma1, LOW);
  digitalWrite(ma2, HIGH);
  delay(1500);
}
