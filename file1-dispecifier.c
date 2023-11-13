#include "main.h"

/**
 * di_integer -prints output with respect to specified format
 * @d_and_i: mandatory argument of char pointer string
 * @... variable arguments expected to include, d and i
 *
 * Return: total characters output on success, -1 if error
 */
int di_integer(const char *d_and_i, ...)
{
	va_list di_lyst;
	int di_count = 0;

	if (format == NULL)
		return (-1);

	va_star(di_lyst, d_and_i);

	while (*d_and_i)
	{
		if (d_and_i != '%')
		{
			write(1, d_and_i, 1)
		}
	}
}
