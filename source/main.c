/*	Author: sng055
 *  Partner(s) Name: Sunny Ng
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
    /* Insert DDR and PORT initializations */
	DDRB = 0xFE;
	DDRD = 0x00;
	PORTB = 0x00;
	PORTD = 0x00;
	unsigned long weight = 0x00;
	unsigned long tempB = 0x00;
	unsigned long tempD = 0x00;
    /* Insert your solution below */
    while (1) {
	tempB = PINB & 0x01;
	tempD = PIND << 1;
	weight = tempD | tempB;
	if (weight > 70 && weight > 5 ) {
	PORTB = 0x04;	
}
	if (weight >= 70) {
	PORTB = 0x02;
}
	if (weight <= 5) {
	PORTB = 0x00;
}  	
    }
    return 1;
}
