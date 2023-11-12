#include "main.h"

/**
 * _printf - produces output according to format
 * @format: first argument
 *
 * Return: total characters output, -1 on error
 */
int _printf(const char *format, ...)
{
	va_list sc_lyst;
	int sc_count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

		return (-1);

	va_start(sc_lyst, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			sc_count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				sc_count++;
			}
			else if (*format == 's')
			{
				char *ptrString = va_arg(sc_lyst, char *);

				int x = strlen(ptrString);

				while (ptrString[x] != '\0')
					x++;
				write(1, ptrString, x);
				sc_count += x;
			}
			else if (*format == 'c')
			{
				char letter = va_arg(sc_lyst, int);

				write(1, &letter, 1);
				sc_count++;
			}
		}
		format++;
	}
va_end(sc_lyst);

return (sc_count);
}
