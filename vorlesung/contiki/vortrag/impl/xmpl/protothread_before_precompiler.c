PROCESS_THREAD(xyz)
{
	int i = 0;
	PROCESS_BEGIN();


		do_something();
		PROCESS_WAIT();

		do_something_else();
	PROCESS_END();

}
