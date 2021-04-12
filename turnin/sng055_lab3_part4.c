/*	Author: sng055
 *  Partner(s) Name: Sunny Ng
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
    /* Insert DDR and PORT initializations */
	DDRA = 0x00;
	DDRB = 0xFF;
	DDRC = 0xFF;
	PORTA = 0xFF;
	PORTB = 0x00;
	PORTC = 0x00;
	unsigned char lowerA = 0x00;
	unsigned char upperA = 0x00;
	unsigned char tempB = 0x00;
	unsigned char tempC = 0x00;
    /* Insert your solution below */
    while (1) {
	lowerA = PINA & 0x0F;
	upperA = PINA & 0xF0;
	
	tempB = upperA >> 4;
	tempC = lowerA << 4;

	PORTB = tempB;
	PORTC = tempC;  	
    }
    return 1;
}
