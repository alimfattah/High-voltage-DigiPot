#include <SPI.h>
//byte address=0x11;//B00010001 //command write mcp
int CS= 10;       // insisialisasi chip select master connected to slave
int dataIn;      //inisialisasi variabel

void setup()
{
  pinMode (CS, OUTPUT);
   SPI.begin();             // setup spi begin corespond spi library
   Serial.begin(115200);   //setup serial communication
}
void loop() {

if(Serial.available())
{
  int dataIn = Serial.parseInt();  
      if(dataIn!=0){
      digitalPotWrite(dataIn); //change wiper position between 1-255 pos
      Serial.println(dataIn);
      }
      if(dataIn==256){          //memasukan perintah wiper ke posisi 0 karena serial parseint mengembalikan angka 0
      digitalPotWrite(0);
      Serial.println("0");
      }
      if(dataIn>256||dataIn<0){  //membatasi posisi wiper hanya dalam posisi 0-255
      digitalPotWrite(127);
      Serial.println("127");
      }
}
}


int digitalPotWrite(int value)  //assign function to change wiper digital potentiometer
{ 
  digitalWrite(CS, LOW);    // memulai proses transfer data spi
  //SPI.transfer(address); //untuk command control write mcp41hv51 
  SPI.transfer(value);      // mengirimkan data spi untuk mengubah posisi wiper
  digitalWrite(CS, HIGH);   //mengakhiri proses transfer data spi
}
