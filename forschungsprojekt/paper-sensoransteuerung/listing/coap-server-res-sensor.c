RESOURCE(ressensor_sht21Temp, METHOD_GET, "uri/to/sensor/sht21",
	"rt=\"Sensor\"");
ressensor_sht21Temp_handler(void *request, void *response,
	uint8_t *buffer, uint16_t preferred_size, int32_t *offset)
{
	// read sensor value
	int length = 10; // <= REST_MAX_CHUNK_SIZE !
	char message[10];
	sht21_sensor.value(SHT21_SENSOR_TEMP);
	sht21_sensor_getLastTemperature(message, length);

	// REST: piggy-backed response
	REST.set_header_content_type(response, REST.type.TEXT_PLAIN);
	REST.set_header_etag(response, (uint8_t *) &length, 1);
	REST.set_response_payload(response, message, length);
}
