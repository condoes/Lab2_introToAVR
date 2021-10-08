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
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0x00; PORTC = 0xFF;
    DDRD = 0xFF; PORTD = 0x00;

	unsigned char total_weight = 0x0;
    unsigned char tmpA = 0x0;
    unsigned char tmpB = 0x0;
    unsigned char tmpC = 0x0;
    unsigned char tmpD = 0x0;
	

    /* Insert your solution below */
    while (1) {
        
        PORTD = 0x00;
        tmpA = PINA; tmpB = PINB; tmpC = PINC;
        total_weight = tmpA + tmpB + tmpC;

        if(total_weight > 0x8C) {
            tmpD = 0x1;
        }
        if((tmpA - tmpC) > 0x50 || (tmpC - tmpA) > 0x50) {
            tmpD = tmpD | 0x2;
        }

        if(total_weight > 0x0F) {
            total_weight = total_weight >> 2;
        }
        else {
            total_weight = total_weight << 2;
        }


        PORTD = (total_weight & 0x0FC) | tmpD;

        
    }

    return 1;
}
