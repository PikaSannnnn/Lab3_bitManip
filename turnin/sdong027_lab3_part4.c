/*	Author: sdong027
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #4
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
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00; 
	DDRC = 0xFF; PORTC = 0x00; 
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
    unsigned char tmpC = 0x00;

	while(1) {
    	tmpA = PINA & 0xFF;
        tmpB = 0x00;
        tmpC = 0x00;

        tmpB = tmpA >> 4;
        tmpC = tmpA << 4;

        PORTB = tmpB;
		PORTC = tmpC;
	}
	return 0;
}
