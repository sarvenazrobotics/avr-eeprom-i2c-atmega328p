#include <io.h>
#include <i2c.h>
#include <delay.h>
char data;
unsigned int address;
void eeprom_write(char data,unsigned int address);
char eeprom_read(unsigned int address) ;

void main(void)
{
    i2c_init();
while (1)
    {
    // Please write your application code here

    }
}

void eeprom_write(char data,unsigned int address)
{
  i2c_start(); 
  i2c_write(0x0A); //extracted of datasheet  eeprom address+write
  i2c_write(address>>8);//8bits high
  i2c_write(address);
  i2c_write(data);
  i2c_stop();

};
char eeprom_read(unsigned int address)
{     
        char tmp;
    //according to datasheet , it should start with dummy write
      i2c_start(); 
      i2c_write(0x0A); //extracted of datasheet eeprom address+write
      i2c_write(address>>8);//8bits high
      i2c_write(address);
      i2c_write(data);
      i2c_stop();


     //read
    i2c_start();
    i2c_write(0xA1);//EEPROM ADDRESS+READ
    tmp=i2c_read(0);
    i2c_stop();
    
    };