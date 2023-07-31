#include <SPI.h>
//byte address=0x11;//B00010001 //untuk mcp
int CS= 10;
int dataIn;

void setup()
{
  pinMode (CS, OUTPUT);
   SPI.begin();
   Serial.begin(115200);
   digitalPotWrite(0x00);
}
void loop() {

if(Serial.available())
{
  int dataIn = Serial.parseInt();
      if(dataIn!=0){
      digitalPotWrite(dataIn); //rentang dari 1-255 posisi
      Serial.println(dataIn);
      }

}
}


int digitalPotWrite(int value)
{
  digitalWrite(CS, LOW);
  //SPI.transfer(address); //untuk mcp
  SPI.transfer(value);
  digitalWrite(CS, HIGH);
}
