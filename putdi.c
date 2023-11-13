#include "main.h"

/**
 * putdi - puts %d and %i values on console
 * @lyst: listed no of variables; arguments
 * Return: total length/ no of chars printed on console
 */
int putdi(va_list lyst)
{
	int len_di;

	len_di = putdi(lyst);
	return (len_di);
}

/**
 * find_no - function to find length of no.
 * @total: listed variables; arguments
 * Return: total characters to be printed
 */
int find_no(va_list total)
{
	int vals;
	unsigned int numvals;
	int di_len;
	int div;

	if (vals < 0)
	{
		di_len += _putchar('-');
		numvals = vals * -1;
	}
	else
		numvals = vals;

	for (; numvals / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		di_len += _putchar('0' + numvals / div);
		numvals %= div;
		div /= 10;
	}
	return (numvals);
}
