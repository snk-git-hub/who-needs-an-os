#include <xc.h>

#pragma config WDTE = OFF

void delay(void)
{
    for(unsigned long i = 0; i < 5000; i++);
}

void main(void)
{
    TRISB = 0x00;

    while(1)
    {
        unsigned char led = 0x01;

        for(int i = 0; i < 8; i++)
        {
            PORTB = led;
            delay();

            led = led << 1;
        }

        PORTB = 0x00;
        delay();
    }
}
