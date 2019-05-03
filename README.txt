This is an iot based bluetooth controlled home project.

The components used for this project are:

•	Arduino Uno
•	Relays(2)
•	Resistors(3)
•	Jumper Cables
•	9 volt battery
•	12 volt ac adapter
•	Bt05 bluetooth sensor
•	Transistors(2) 
•	Diode(2)
•	PCB Board
•	Solder wire
•	BT05 Bluetooth Module
•	Charging Adapter

Step by step implementation of the project can be found in the youtube link 

Since the bluetooth module(bt05) is a low energy bluetooth device a separate android app(link-https://play.google.com/store/apps/details?id=com.macdom.ble.blescanner&hl=en_IN)
was used to communicate with the bt05 module. After connecting we need to go into custom service section and click on the w button to send write requests. In my case we can send the following inputs to the 
bluetooth-0,1,2,3(These are the values permitted by the code in arduino.ino file).Anything else will not do anything.
These are the respective actions of the values:

0-for turning off fan and led on arduino
1-for turning on fan and led on arduino
2-for turning off led and led on arduino
3-for turning on led and led on arduino

the values will not have any effect.The arduino board needs to be disconnected to pass other values.






