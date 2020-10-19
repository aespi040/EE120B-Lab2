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
	DDRC = 0xFF; PORTC = 0x00;

    /* Insert your solution below */
    while (1) {

	if((PINA & 0x0F) == 0x00){
                PORTC = 4;
        }

	if((PINA & 0x0F) == 0x01){
		PORTC = 3;
	}

	if((PINA & 0X0F) == 0X02 ){
		PORTC = 3;
	}

	if((PINA & 0x03) == 0x03) {
		PORTC = 2;
	}

	if((PINA & 0x04) == 0x04) {
		// cntAval = cntAval - 1;
		PORTC = 3;
	}

	if((PINA & 0X05) == 0X05 ){
               // cntAval = cntAval - 2;
		PORTC = 2;
        }

        if((PINA & 0x06) == 0x06) {
               // cntAval = cntAval - 2;
		PORTC = 2;
        }

        if((PINA & 0x07) == 0x07) {
               // cntAval = cntAval - 3;
		PORTC = 1;
        }

	if((PINA & 0X08) == 0X08 ){
               // cntAval = cntAval - 1;
		PORTC = 3;
        }

         if((PINA & 0x09) == 0x09) {
               // cntAval = cntAval - 2;
		PORTC = 2;
        }

        if((PINA & 0x0A) == 0x0A) {
               // cntAval = cntAval - 2;
		PORTC = 2 ;
        }

        if((PINA & 0X0B) == 0X0B ){
               // cntAval = cntAval - 3;
		PORTC = 1;
        }

        if((PINA & 0x0C) == 0x0C) {
               // cntAval = cntAval - 2;
		PORTC = 2;
        }

        if((PINA & 0x0D) == 0x0D) {
               // cntAval = cntAval - 3;
		PORTC = 1;
        }


	 if((PINA & 0X0E) == 0X0E ){
               // cntAval = cntAval - 3;
        	PORTC = 1;
	 }

	if(PINA & 0X0F == 0X0F){
		PORTC = 0;
	}

      

    }
    return 1;}
