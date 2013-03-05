struct network_driver {
	char *name;
	/** Initialize the network driver */
	void (* init)(void);
	/** Callback for getting notified of incoming packet. */
	void (* input)(void);
};
