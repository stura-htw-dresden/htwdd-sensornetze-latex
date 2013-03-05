RESOURCE(restext, METHOD_GET, "uri/to/text",
		"title=\"HelloWorld: ?len=0..\" rt=\"Text\"");
restext_handler(void *request, void *response,
	uint8_t *buffer, uint16_t preferred_size, int32_t *offset)
{
	const char *const message = "HelloWorld";
	int length = 0;
	const char *length_string;

	// query variables
	if (REST.get_query_variable(request, "len", &length_string))
	{
		// length query variable is available
		length = atoi(length_string);
		if (length < 0) length = 0;
		else if (length > REST_MAX_CHUNK_SIZE)
			length = REST_MAX_CHUNK_SIZE;
	}

	// payload preparation
	memcpy(buffer, message, length);

	// REST: piggy-backed response
	REST.set_header_content_type(response, REST.type.TEXT_PLAIN);
	REST.set_header_etag(response, (uint8_t *) &length, 1);
	REST.set_response_payload(response, buffer, length);
}
