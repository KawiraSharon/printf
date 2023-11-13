#include "main.h"

/**
 * _printf - print total characters based on specified output
 * @format: mandatory argument; format string
 * @... variable arguments,
 *
 * Author: KawiraSharon
 * Return: total characters printed to console
 */
int _printf(const char *format, ...)
{
	int spcfr_value;
	
	init spec_char[] = {
		{'d',  my_j_function_for_putdi},
		{'i', my_j_function_for_putdi},
		{0, NULL},
	};
	va_list spec_lyst;

	if (format == NULL)
		return (-1);

	va_start(spec_lyst, format);
	spcfr_value = spec_result(format, spec_char, spec_lyst);
	va_end(spec_lyst);
	return (spcfr_value);
}
