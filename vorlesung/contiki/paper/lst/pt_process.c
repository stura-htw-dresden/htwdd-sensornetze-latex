/*-------------------------------------------------------*/
PROCESS(example_process, "example process");
AUTOSTART_PROCESSES(&example_process);
/*-------------------------------------------------------*/
PROCESS_THREAD(example_process, ev, data)
{
	PROCESS_BEGIN();
		do_something();
		PROCESS_PAUSE();
		do_something_else();
		PROCESS_WAIT_UNTIL(temperatur > 30);
		do_something_completely_else();
	PROCESS_END();
}
/*-------------------------------------------------------*/
