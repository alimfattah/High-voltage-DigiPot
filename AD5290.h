#ifndef AD5290_h
#define AD5290_h

#include <Arduino.h>
#include <SPI.h> 

class AD5290
{
  public:
    AD5290( int nCSPin);
    byte  WiperWrite( byte posWiper);
  private:
    int   __nCSPin;
};

#endif
