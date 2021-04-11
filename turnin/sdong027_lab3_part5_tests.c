/*	Author: sdong027
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #5
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	DDRD = 0x00; PORTD = 0xFF;
	DDRB = 0xFE; PORTB = 0x00; // ooo oooi 
    unsigned short input = 0x00;
	unsigned char tmpB = 0x00;

	while(1) {
    	input = PIND & 0xFF;
        input = (input << 1) | (PINB & 0x01);
        tmpB = 0x00;

        if (input >= 70) {
            tmpB = 0x02;
        }
        else if (input > 5) {
            tmpB = 0x04;
        }

        PORTB = tmpB & 0xFE;
	}
	return 0;
}
