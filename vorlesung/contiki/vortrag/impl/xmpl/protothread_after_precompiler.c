int process_xyz(int marke)
{
	int i = 0;
	switch(marke)
	{
	case 0:
		do_something();
		return 123;
	case 123:
		do_something_else();
		return PROCESS_DONE;
	}
}
