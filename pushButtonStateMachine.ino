/* pushButtonStateMachine
 *  
 *  Example code that uses a push button to cycle the program through a series
 *  of states. Each push of the button will increment the variable programState. 
 *  This is called a state variable, and it will determine what the program does. 
 *  In this case it will be used to tell the program which color to show.
 *  
 *  Hardware: Push Button connected to pin 12 and GND
 *            RGB LED on pins 9, 10, and 11.
 *  
 *  B. Huang, SparkFun Electronics
 */

byte redPin = 9;
byte greenPin = 10;
byte bluePin = 11;
byte buttonPin = 12;

int programState = 0;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // defaults the input state to HIGH w/o external pullup resistor.
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
  //check if button is pressed, increment the state variable
  if (digitalRead(buttonPin) == LOW)
  {
    programState = programState + 1;
    //check if programState is greater than or equal to 3, reset to 0.
    if (programState >= 3)
      programState = 0;
       
    //while() will wait until the button is released before moving on.
    while (digitalRead(buttonPin) == LOW)
    {
      //do nothing. just wait while digitalRead(buttonPin) is still LOW
    }
  }

  //check the programState variable, and do something based on its value
  if(programState == 0)
  { 
    //red
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);    
  }
  else if(programState == 1)
  {
    //white
    analogWrite(redPin, 255);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 255);        
  }
  else if(programState == 2)
  {
    //blue
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
  }
}

