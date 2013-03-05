PROCESS(rest_server, "CoAP REST Server");
PROCESS_THREAD(rest_server, ev, data)
{
	PROCESS_BEGIN();
	// init hardware components, needed in resources
	// init rest engine
	rest_init_engine();
	// activate rest resources
	rest_activate_resource(&restext);
	rest_activate_resource(&ressensor_sht21Temp);
	// endless loop
	while (1) PROCESS_WAIT_EVENT();
	PROCESS_END();
}
