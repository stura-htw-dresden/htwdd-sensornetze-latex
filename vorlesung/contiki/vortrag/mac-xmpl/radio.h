struct radio_driver {
	int (* init)(void);
	/** Prepare the radio with a packet to be sent. */
	int (* prepare)(const void *payload, unsigned short payload_len);
	/** Send the packet that has previously been prepared. */
	int (* transmit)(unsigned short transmit_len);
	/** Prepare & transmit a packet. */
	int (* send)(const void *payload, unsigned short payload_len);
	/** Read a received packet into a buffer. */
	int (* read)(void *buf, unsigned short buf_len);
	/** Perform a Clear-Channel Assessment (CCA) to find out if there is
	    a packet in the air or not. */
	int (* channel_clear)(void);
	/** Check if the radio driver is currently receiving a packet */
	int (* receiving_packet)(void);
	/** Check if the radio driver has just received a packet */
	int (* pending_packet)(void);
	/** Turn the radio on. */
	int (* on)(void);
	/** Turn the radio off. */
	int (* off)(void);
};
