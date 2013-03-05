#include "contiki.h"
#include "usb.h"
#include <string.h>

/*-------------------------------------------------------*/
PROCESS(hellosworld_process, "HeLLo's World process");
AUTOSTART_PROCESSES(&hellosworld_process);
/*-------------------------------------------------------*/
PROCESS_THREAD(hellosworld_process, ev, data)
{
	char * str = "HeLLo's World!\n";
	int i;
	PROCESS_BEGIN();
	
	usb_init();
	for(i = 0; i < strlen(str); ++i)
		usb_putc_std(str[i], stdout);
	
	PROCESS_END();
}
/*-------------------------------------------------------*/
