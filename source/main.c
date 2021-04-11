/*	Author: sdong027
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #1
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
    DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
    DDRB = 0x00; PORTB = 0xFF; // Configure port A's 8 pins as inputs
	DDRC = 0xFF; PORTC = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
	unsigned char tmpC = 0x00;

	while(1) {
		tmpA = PINA & 0xFF;	
        tmpB = PINA & 0xFF;
        tmpC = 0x00;

        for (int i = 0x00; i < 8; i++) {
            if ((tmpA >> i) & 0x01) {
                tmpC++;
            }
            if ((tmpB >> i) & 0x01) {
                tmpC++;
            }
        }

		PORTC = tmpC;
	}
	return 0;
}
