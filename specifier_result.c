#include "main.h"

/**
 * spec_result - returns total characters output
 * @format: mandatory argument; format string
 * @spec_char: list of specifiers in basefile
 * @spec_lyst: va_list name
 *
 * Author: KawiraSharon
 *
 * Return: total characters output on success, -1 on error
 */
int spec_result(const char *format, init spec_char[], va_list spec_lyst)
{
	int x, y, z, spcfr_value;

	if (spec_char == NULL)
	{
		return (-1);
	}

	spcfr_value = 0;
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0; spec_char[y].mstruct != 0; y++)
			{
				if (format[x + 1] == spec_char[y].mstruct)
				{
					z = spec_char[y].j(spec_lyst);
					if (z == -1)
					{
						return (-1);
					}
					spcfr_value += z;
					break;
				}
			}
		if (spec_char[y].mstruct == 0 && format[x + 1] != ' ')
		{
			if (format[x + 1] != '\0')
			{
				_putchar(format[x]);
				_putchar(format[x + 1]);
				spcfr_value = spcfr_value + 2;
			}
			else
				return (-1);
		}
		++x;
		}
		else
		{
			_putchar(format[x]);
			spcfr_value++;
		}
	}
	return (spcfr_value);
}
