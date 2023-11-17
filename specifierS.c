#if 0 
#include "main.h"

/**
 * specifierS - convert specifier
 * @listString: arguments
 * Return: printed characters
 */

int specifierS(va_list listString)
{
	char *s;
	int i, total = 0, value;

	s = va_arg(listString, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			total += 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				total++;
			}
		} else
		{
			_putchar(s[i]);
			total++;
		}
	}
	return (total);
}
#endif
