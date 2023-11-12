#include "main.h"

/**
 * _printf - Produces output following specified format
 * @format: mandatory arg; character string
 *
 * Return: total no. of printed characters on success -1 if error
 */
int _printf(const char *format, ...)
{
	va_list printfString;

	unsigned int l = 0, printed = 0;
	char *str;
	char c;

	va_start(printfString, format);
	if (!format)
		return (-1);
	while (format[l] && format[l] != '\0')
	{
		if (format[l] != '%')
		{
			write(1, &format[l], 1);
			l++;
			printed++;
		}
		else
		{
			switch (format[l + 1])
			{
				case 'c':
					c = va_arg(printfString, int);
					write(1, &c, 1);
					printed++;
					l += 2;
					break;
				case 's':
					str = va_arg(printfString, char *);
					write(1, str, _strLen(str));
					printed += _strLen(str);
					l = l + 2;
					break;
				default:
					l++;
			}
		}
	}
	va_end(printfString);
	return (printed);
}
