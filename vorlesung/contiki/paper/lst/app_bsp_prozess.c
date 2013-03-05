#include "contiki.h"

/*----------------------------------------------------------------------------*/
PROCESS(example_process, "Mein Beispielprozess");
AUTOSTART_PROCESSES(&example_process);
/*----------------------------------------------------------------------------*/
PROCESS_THREAD(example_process, ev, data)
{
	PROCESS_BEGIN();

	/* LED an Pin PB0 anschalten */
	DDRB |= (1 << PB0);	/* Bit PB0 als Ausgang deklarieren */
	PORTB &= ~(1 << PB0);	/* Ausgang mit Strom beschalten */

	PROCESS_END();
}
/*----------------------------------------------------------------------------*/
