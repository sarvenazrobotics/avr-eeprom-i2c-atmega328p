#include <io.h>
#include <i2c.h>
#include <delay.h>

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
  i2c_write(address>>8);//8bits high
  i2c_write(address);
  i2c_write(data);
  i2c_stop();

};
char eeprom_read(void) ;