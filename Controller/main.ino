/* Script under the Gnu General Public License v.3 (or higher) by the Liège Hackerspace 
Refer to the repo's license */

#define BIKE_INPUT 2 // Triggered when a full rotation(?) has been done
#define BUTTON_INPUT 3

#define KEY_PRESS_E 0x65 // hex for 'lower case e' character on an AZERTY system
#define KEY_PRESS_A 0x71 // hex for lower case 'a' character on an AZERTY system


const int LATENCY = 75; // used to be sure the system is not overwhelmed by some elite athletes !

void setup()
{
  pinMode(BIKE_INPUT, INPUT_PULLUP);
  pinMode(BUTTON_INPUT, INPUT_PULLUP);

  Keyboard.begin();

  delay(10);
}

void loop()
{
  if(!digitalRead(BUTTON_INPUT))
    Keyboard.write(KEY_PRESS_A);
  
  if(!digitalRead(BIKE_INPUT))
    Keyboard.write(KEY_PRESS_E);
  
  delay(LATENCY);
}
