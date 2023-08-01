#include <SPI.h>
//byte address=0x11;//B00010001 //command write mcp
int CS= 10;
int dataIn;

void setup()
{
  pinMode (CS, OUTPUT);
   SPI.begin();
   Serial.begin(115200);
}
void loop() {

if(Serial.available())
{
  int dataIn = Serial.parseInt();
      if(dataIn!=0){
      digitalPotWrite(dataIn); //between 1-255 pos
      Serial.println(dataIn);
      }
      if(dataIn==256){
      digitalPotWrite(0);
      Serial.println("0");
      }
      if(dataIn>256||dataIn<0){
      digitalPotWrite(127);
      Serial.println("127");
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
