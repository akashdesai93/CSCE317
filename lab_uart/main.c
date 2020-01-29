#include <avr/io.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <util/delay.h>


int main(void) {
	/* initialize PC0 as an output */
	DDRC |= (1<<0);
	
		
	/* while true ... */
	while(1) {
		/* sleep for 1/2 second */
		PORTC |= 1;
		_delay_ms(500);
		PORTC &= ~(1<<0);
		/* sleep for 1/2 second */
		_delay_ms(500);
		/* set PC0 to low */
		PORTC |= 0;
	}
		

		

	

		
}

