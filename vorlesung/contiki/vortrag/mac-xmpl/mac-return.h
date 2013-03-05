enum MAC_return_types {
	/**< The MAC layer transmission was OK. */
	MAC_TX_OK,
	/**< The MAC layer transmission could not be performed due to a
	 *      collision. */
	MAC_TX_COLLISION,
	/**< The MAC layer did not get an acknowledgement for the packet. */
	MAC_TX_NOACK,
	/**< The MAC layer deferred the transmission for a later time. */
	MAC_TX_DEFERRED,
	/**< The MAC layer transmission could not be performed because of an
	 *      error. The upper layer may try again later. */
	MAC_TX_ERR,
	/**< The MAC layer transmission could not be performed because of a
	 *      fatal error. The upper layer does not need to try again, as the
	 *           error will be fatal then as well. */
	MAC_TX_ERR_FATAL
};
