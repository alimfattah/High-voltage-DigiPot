#include "AD5290.h"

byte AD5290::WiperWrite( byte posWiper)
{
    digitalWrite( __nCSPin, LOW );  // open the path of the spi communication
    SPI.transfer( 0x00);          // The command for wiper set position
    SPI.transfer( posWiper);       // The write command expects a second byte which is the value for the wiper
    digitalWrite( __nCSPin, HIGH); //close the path of the spi communication

    return( WiperWrite());   //returned value
}
