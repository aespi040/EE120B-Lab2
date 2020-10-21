/*	Author: lab
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
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

    /* Insert your solution below */
	unsigned short totalSum = 0x00;
        signed short difference = 0x00;
	unsigned char tempD = 0x00;
	unsigned char tempA = 0x00;
	unsigned char tempB = 0x00;
	unsigned char tempC = 0x00;

	       


    while (1) {

	    tempA = PINA;
	    tempB = PINB;
	    tempC = PINC;
	    tempD = 0x00;
			

	totalSum = tempA + tempB + tempC;
	

	//difference = PINA - PINC; //what if I get a negative value
		
	    if(totalSum > 140){
		tempD = tempD | 0x01;
	    }

	    difference = tempA - tempC;

	    if( (difference > 80) || (difference < -80)){
		tempD = tempD | 0x02;
            }

	    totalSum = totalSum >> 4; // divide by 16
	    totalSum = totalSum << 2; //sig bits
	    
	   // PORTD = totalSum | tempD;

    }

	   
    return 1;}
