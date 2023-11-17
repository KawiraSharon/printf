#include "main.h"

/**
 * convert_type - function to return total chars
 * @format: mandatory argument
 * @form_at: array of format specifier elements
 * @spec_lyst: variable/argument list
 * Return: char count
 */

int convert_type(const char *format, spec_ifier form_at[], va_list spec_lyst)
{
	int a, b, f_spec, type_written;

	type_written = 0;
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			for (b = 0; form_at[b].mtc != NULL; b++)
			{
				if (format[a + 1] == form_at[b].mtc[0])
				{
					f_spec = form_at[b].i(spec_lyst);
					if (f_spec == -1)
						return (-1);
					type_written += f_spec;
					break;
				}
			}
			if (form_at[b].mtc == NULL && format[a + 1] != ' ')
			{
				if (format[a + 1] != '\0')
				{
					_putchar(format[a]);
					_putchar(format[a + 1]);
					type_written = type_written + 2;
				}
				else
					return (-1);
			}
			a = a + 1;
		}
		else
		{
			_putchar(format[a]);
			type_written++;
		}
	}
	return (type_written);
}
