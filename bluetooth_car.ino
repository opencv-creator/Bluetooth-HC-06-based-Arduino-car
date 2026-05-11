#include <SoftwareSerial.h>

// Define SoftwareSerial pins: (RX, TX)
SoftwareSerial bluetooth(3, 4); 

const int ledPin = 13; // Built-in LED

void setup() {
  pinMode(ledPin, OUTPUT);
  
  // Start serial for debugging
  Serial.begin(9600);
  
  // Start SoftwareSerial for Bluetooth (Default baud is usually 9600)
  bluetooth.begin(9600);
  
  Serial.println("Bluetooth LED Control Ready");
  motor_setup() ;
}

void loop() {
  // Check if data is coming from Bluetooth
  if (bluetooth.available() > 0) {
    char command = bluetooth.read();
    Serial.print("Received: ");
    Serial.println(command);

    if (command == 'S') {
      Serial.println("stop");
       direction(5);

    } 
    else if (command == 'F') {
    Serial.println("forward");
     direction(1);
    
    }
        else if (command == 'L') {
      Serial.println("left");
     direction(3);
    }
        else if (command == 'R') {
      Serial.println("right");
     direction(2);
    }
        else if (command == 'B') {
      Serial.println("reverser");
     direction(4);
    }
  }
}