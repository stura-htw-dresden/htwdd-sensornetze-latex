struct rdc_driver {
	char *name;
	/** Initialize the RDC driver */
	void (* init)(void);
	/** Send a packet from the Rime buffer  */
	void (* send)(mac_callback_t sent_callback, void *ptr);
	/** Send a packet list */
	void (* send_list)(mac_callback_t sent_callback, void *ptr,
			struct rdc_buf_list *list);
	/** Callback for getting notified of incoming packet. */
	void (* input)(void);
	/** Turn the MAC layer on. */
	int (* on)(void);
	/** Turn the MAC layer off. */
	int (* off)(int keep_radio_on);
	/** Returns the channel check interval,
	 * expressed in clock_time_t ticks. */
	unsigned short (* channel_check_interval)(void);
};
