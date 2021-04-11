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
	DDRC = 0xFF; PORTC = 0x00; // Configure port C's 8 pins as outputs, initialize to 0s
	unsigned char tmpA = 0x00;
	unsigned char tmpC = 0x00;
	unsigned char seat = 0x00;

	while(1) {
    	tmpA = PINA & 0xFF;
        tmpC = 0x00;
	    seat = 0x00;

	    seat = tmpA & 0x70;
        // Seatbelt Light
        if ((seat & 0x10) && (seat & 0x20) && !(seat & 0x40)) { // key && seated && seatbelt not fastened
            tmpC = tmpC | 0x80;        
	}

	    tmpA = tmpA & 0x0F;
        // Fuel Gauge
        if (tmpA >= 13) {   // 13 - 15
            tmpC = tmpC | 0x3F; // PC5 - PC0
        }
        else if (tmpA >= 10) {  // 10 - 12
            tmpC = tmpC | 0x3E; // PC5 - PC1
        }
        else if (tmpA >= 7) {   // 7 -9
            tmpC = tmpC | 0x3C; // PC5 - PC2
        }
        else if (tmpA >= 5) {   // 5 - 6
            tmpC = tmpC | 0x38; // PC5 - PC3
        }
        else if (tmpA >= 3) {   // 3 - 4
            tmpC = tmpC | 0x30; // PC5 - PC4
        }
        else if (tmpA >= 1) {   // 1 - 2
            tmpC = tmpC | 0x20; // PC5
        }

        // low fuel
        if (!(tmpC & 0x0F)) { // checks if any of PC0 - PC3 ( > 4 )is 1
            tmpC = tmpC | 0x40;
        }

		PORTC = tmpC;
	}
	return 0;
}
