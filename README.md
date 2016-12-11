# pushButtonStateMachine

Example code that uses a push button connected to pin 12 to cycle the Arduino through a series of program states. 
Each time the button is pressed, it will cycle a variable called programState. This variable will then be used
to determine what the program will do. 

In this example, it will cycle an RGB LED through three colors and then turn off.

### Hardware connections

Connect a push button to pin 12 and GND.

Connect a common cathode RGB LED to pins 9, 10, and 11 using a 330 Ohm current limiting resistor.

Arduino side             RGB LED
------------             -------
   pin 9  ---/\/\/\/\/--- RED
              330 Ohm		 
   GND    --------------- GND
   
   pin 10 ---/\/\/\/\/--- GREEN
              330 Ohm
   pin 11 ---/\/\/\/\/--- BLUE
              330 Ohm
