#include "main.h"

/**
 * write_value - write char count
 *@number: mandatory arg
 * Return: total char count
 */

int write_value(va_list number)
{
	int di_len;

	di_len = di_no(number);
	return (di_len);
}


/**
 * di_no - call above func
 * @numbers: variable argumennts
 * Return: total count char
 */

int di_no(va_list numbers)
{
	int x;
	int divi;
	int id_len;
	unsigned int var;

	x  = va_arg(numbers, int);
	divi = 1;
	id_len = 0;

	if (x < 0)
	{
		id_len += _putchar('-');
		var = x * -1;
	}
	else
		var = x;

	for (; var / divi > 9; )
		divi *= 10;

	for (; divi != 0; )
	{
		id_len += _putchar('0' + var / divi);
		var %= divi;
		divi /= 10;
	}

	return (id_len);
}
