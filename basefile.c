#include "main.h"

/**
 * _printf - total char count
 * @format: format string
 * Return: total character count
 */
int _printf(const char *format, ...)
{
	int type_written;
	spec_ifier form_at[] = {
		{"d", write_value},
		{"i", write_value},
		{"c", char_value},
		{"s", string_value},
		{"%", percent_value},
		{NULL, NULL}
	};

	va_list spec_lyst;

	if (format == NULL)
		return (-1);

	va_start(spec_lyst, format);
	type_written = convert_type(format, form_at, spec_lyst);
	va_end(spec_lyst);
	return (type_written);
}
