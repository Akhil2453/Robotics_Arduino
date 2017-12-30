/*
   Interfacing Bluetooth to control an LED

   Use the software serial library to interface bluetooth for Arduino UNO
   for Arduino MEGA we can use inbuilt serial ports

   This code is for Arduino UNO, if you have arduino mega, uncomment
   the line with mega prefix, ad comment the uno prefixed line

   Connection

   --Arduino UNO--

   Arduino 5V --> 5V|VCC of Bluetooth module
   Arduino Gnd --> GND of Bluetooth Module

   Pin 6(Software Rx) --> Tx of Blutooth Module
   Pin 7(Software Tx) --> Rx of Bluetooth Module

   --Arduino MEGA--
   Serial3 Rx --> Tx of Blutooth Module
   Serial3 Tx --> Rx of Bluetooth Module

*/

//call the software serial library
// Comment the below line while working with Arduino Mega
#include <SoftwareSerial.h>//UNO

// Comment the below line while working with Arduino Mega
SoftwareSerial sw(6, 7); //(Rx,Tx)   UNO

int pin = 13;
int data = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  Serial.begin(9600);

  Serial.println("......");
  sw.begin(9600);  //UNO
  //Serial3.begin(9600)  //MEGA

}

void loop() {
  // put your main code here, to run repeatedly:
  if (sw.available() > 0) //UNO
  //if(Serial3.available() > 0) //MEGA
  {
    data = sw.read();  //UNO
    //data = Serial3.read()  //MEGA
    if (data == '1') {
      digitalWrite(pin, HIGH);
    }
    if (data == '0') {
      digitalWrite(pin, LOW);
    }
    Serial.write(data);  
  }
  
}
