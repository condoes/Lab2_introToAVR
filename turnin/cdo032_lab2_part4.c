/*	Author: Cindy Do
 *  Partner(s) Name: 
 *	Lab Section: 23
 *	Assignment: Lab #2  Exercise #4
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
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0x00; PORTC = 0xFF;
    DDRC = 0x00; PORTC = 0xFF;
    DDRD = 0xFF; PORTD = 0x00;

	unsigned char total_weight = 0;
    unsigned char tmpA = 0;
    unsigned char tmpB = 0;
    unsigned char tmpC = 0;
	

    /* Insert your solution below */
    while (1) {
        
        PORTD = 0x00;
        tmpA = PINA; tmpB = PINB; tmpC = PINC;
        total_weight = tmpA + tmpB + tmpC;

        if(total_weight > 0x8C) {
            PORTD = PORTD | 0x1;
        }
        if((tmpA - tmpC) > 0x50 || (tmpC - tmpA) > 0x50) {
            PORTD = PORTD | 0x2;
        }

        PORTD = (total_weight & 0xFC) | PORTD;

        
    }

    return 1;
}
