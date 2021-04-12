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
	DDRA = 0x00;
	DDRB = 0x00;
	DDRC = 0x00;
	DDRD = 0xFF;
	PORTA = 0xFF;
	PORTB = 0xFF;
	PORTC = 0xFF;
	PORTD = 0x00;
	unsigned char weight = 0x00;
	unsigned char tempA = 0x00;
	unsigned char tempB = 0x00;
	unsigned char tempC = 0x00;
	unsigned char tempD = 0x00;
	unsigned char diff1 = 0x00;
	unsigned char diff2 = 0x00;
    /* Insert your solution below */
    while (1) {
	tempA = PINA;
	tempB = PINB
	tempC = PINC;
	weight = tempA + tempB + tempC;
	diff1 = tempA - tempC;
	diff2 = tempC - tempA;
	if (weight > 140) {
	tempD = tempD | 0x01;
}
	if ((diff1 > 80) || (diff2 > 80)) {
	tempD = tempD | 0x02;	
}
	weight = (weight >> 2);
	weight = (weight & 0xFC);
	tempD = tempD | weight;
	PORTD = tempD;  	
    }
    return 1;
}
