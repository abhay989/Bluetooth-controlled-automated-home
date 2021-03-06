


#include <SoftwareSerial.h>

#define LED_PIN 13
int led1=2,led2=3;





SoftwareSerial BT05(10, 11); //RX|TX



/*Connect RXD of BT05 module to Arduino Digital Pin no 11
Connect TXD of BT05 module to Arduino Digital Pin no 10
Can be changed if you want to different digital pins
Connect GND of BT05 module to Arduino GND pin
Connect VCC of BT05 module to Arduino VCC (5V) pin*/



void setup() {  

  Serial.begin(9600);

    // set the digital pin as output:

  pinMode(LED_PIN, OUTPUT);
  pinMode(led1, OUTPUT);//led1 is led
  pinMode(led2, OUTPUT);//led2 is fan

  // you may need to change 9600 by another value

  // Once you have found the correct baudrate,

  // you can update it using AT+BAUDx command 

  // e.g. AT+BAUD0 for 9600 bauds

  BT05.begin(9600);

}



void loop() {  

  int c;

    

  if (BT05.available()) {

      c = BT05.read();  

      Serial.print("Received from Bluetooth Device: ");

      Serial.println(c);

      switch(c) { 

        

        case '0'://for turning off fan and led on arduino

              Serial.println("  off");

              digitalWrite(LED_PIN, LOW);
              digitalWrite(led2, LOW);//led2 is fan
              

              break;      

  

        case '1'://for turning on fan and led on arduino

              Serial.println("  on");

              digitalWrite(LED_PIN, HIGH);
              digitalWrite(led2, HIGH);
              
              

              break;
          case '2'://for turning off led and led on arduino

              Serial.println("  off");

              digitalWrite(LED_PIN,LOW);
              digitalWrite(led1, LOW);
              
              

              break;

            case '3'://for turning on led and led on arduino

              Serial.println("  on");

              digitalWrite(LED_PIN,HIGH);
              digitalWrite(led1,HIGH );//LED 1 IS LED
              
              

              break;
             
           

        default:

              Serial.println("case default");

              break;

      }

  }

}
