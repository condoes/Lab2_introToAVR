/*	Author: Cindy Do
 *  Partner(s) Name: 
 *	Lab Section: 23
 *	Assignment: Lab #2  Exercise #2
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

	unsigned char cntavail = 0x00;
	unsigned char tmpA = 0x00;
	

    /* Insert your solution below */
    while (1) {
        tmpA = PINA; //a0
        
        if (tmpA == 0x00) { //all avail.
            cntavail = 0x04;
        }
       	if (tmpA == 0x01 || tmpA == 0x02 || tmpA == 0x04 || tmpA == 0x08){
            cntavail = 0x03; //3 avail.
        } 
	if (tmpA == 0x03 || tmpA == 0x05 || tmpA == 0x09 || tmpA == 0x06 || tmpA == 0xA || tmpA == 0xC) {
		cntavail = 0x02; //2 avail.

    }
	if (tmpA == 0xE || tmpA == 0xB || tmpA == 0xD || tmpA == 0x07) {
	       cntavail = 0x01; //1 avail.
	}
	if (tmpA == 0xF) {
		cntavail = 0x00; //0 avail.
	}	

	PORTC = cntavail;
    }

    return 1;
}
