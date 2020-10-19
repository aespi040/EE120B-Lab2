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

	else if ((PINA & 0x0F) == 0x01){
		PORTC = 3;
	}

	else if((PINA & 0X0F) == 0X02 ){
		PORTC = 0x03;
	}

	else if((PINA & 0x0F) == 0x03) {
		PORTC = 2;
	}

	else if((PINA & 0x0F) == 0x04) {
		// cntAval = cntAval - 1;
		PORTC =0x03;
	}

	 else if((PINA & 0X0F) == 0X05 ){
               // cntAval = cntAval - 2;
		PORTC = 2;
        }

         else if((PINA & 0x0F) == 0x06) {
               // cntAval = cntAval - 2;
		PORTC =0x02;
        }

         else if((PINA & 0x0F) == 0x07) {
               // cntAval = cntAval - 3;
		PORTC = 1;
        }

	 else if((PINA & 0X0F) == 0X08 ){
               // cntAval = cntAval - 1;
		PORTC = 0x03;
        }

	else if((PINA & 0x0F) == 0x09) {
               // cntAval = cntAval - 2;
		PORTC = 2;
        }

         else if((PINA & 0x0F) == 0x0A) {
               // cntAval = cntAval - 2;
		PORTC = 0x02 ;
        }

        else if((PINA & 0X0F) == 0X0B ){
               // cntAval = cntAval - 3;
		PORTC = 1;
        }

        else if((PINA & 0x0F) == 0x0C) {
               // cntAval = cntAval - 2;
		PORTC = 0x02;
        }

	else if((PINA & 0x0F) == 0x0D) {
               // cntAval = cntAval - 3;
		PORTC = 1;
        }


	else if((PINA & 0X0F) == 0X0E ){
               // cntAval = cntAval - 3;
        	PORTC = 0x01;
	 }

	else if(PINA & 0X0F == 0X0F){
		PORTC = 0x80;
	}
	else{}

      

    }
    return 1;}
