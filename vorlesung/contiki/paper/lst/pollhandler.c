void my_handler(void)
{
	...
}

/*-------------------------------------------------------*/
PROCESS(example_process, "example process");
AUTOSTART_PROCESSES(&example_process);
/*-------------------------------------------------------*/
PROCESS_THREAD(example_process, ev, data)
{
	PROCESS_POLLHANDLER(myhandler());

	PROCESS_BEGIN();

	...

	PROCESS_END();
}
/*-------------------------------------------------------*/
