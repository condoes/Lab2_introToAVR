/*	Author: Cindy Do
 *  Partner(s) Name: 
 *	Lab Section: 23
 *	Assignment: Lab #2  Exercise #
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
	DDRB = 0xFF; PORTB = 0x00;

	unsigned char tmpB = 0x00;
	unsigned char tmpA = 0x00;
    /* Insert your solution below */
    while (1) {
	// 1) Read input
        tmpA = PINA & 0x01; //a0
	tmpB = PINA & 0x02; //a1
        
        if (tmpA == 0x00 && tmpB == 0x01) {
            PORTB = 0x01
        }
       	else {
            PORTB = 0x00
        } 

    }
    return 1;
}
