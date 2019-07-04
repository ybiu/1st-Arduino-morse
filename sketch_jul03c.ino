#include <MorseCode.h>


MorseCode Morse(13);


void setup()
{
}


void loop()
{
 
   Morse.transfor('S');
   Morse.transfor('O');
   Morse.transfor('S');
  
  delay(3000);
}
