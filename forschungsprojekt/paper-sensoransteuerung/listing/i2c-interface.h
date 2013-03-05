// The result of a communication
typedef enum i2c_result_t {
	SUCCESSFUL = 0,
	TRANSMISSION_PENDING,
	FAILED_unknown,
	FAILED_ALLOC,
	FAILED_TOO_MUCH_DATA,
	FAILED_BUS_ERROR,
	FAILED_ADDR,
	FAILED_DATA,
	FAILED_NOT_SUPPORTED,
	FAILED_INTERRUPT
} i2c_dev_result_t;

// Send one command to the given device
// (or write null bytes to the register address of the given device)
i2c_dev_result_t
i2c_dev_send_cmd(const uint8_t device_address_rw,
	const uint8_t register_address_command,
	bool is_repeated_start, bool no_stop);

// Write data to a register address field of the given device
i2c_dev_result_t
i2c_dev_write_data(const uint8_t device_address_rw,
	const uint8_t register_address,
	const uint8_t *const register_content_data,
	const size_t register_size,
	bool is_repeated_start, bool no_stop);

// Read data from a register address field of the given device
i2c_dev_result_t
i2c_dev_read_data(const uint8_t device_address_rw,
	const uint8_t register_address,
	uint8_t *const register_content_data,
	const size_t register_size,
	bool is_repeated_start, bool no_stop);

