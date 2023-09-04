/*
 * Project1.cpp
 *
 * Created: 9/4/2023 7:47:29 PM
 * Author : vuthi
 */ 

#include <avr/io.h>
#include <avr/delay.h>


int main(void)
{
    DDRB=0x01;// 0b00000001
    while (1) 
    {
		PORTB=0x01;//LED ON
		_delay_ms(1000); // delay for 1s
		PORTB=0x00;//LED OFF
		_delay_ms(1000);
    }
}

