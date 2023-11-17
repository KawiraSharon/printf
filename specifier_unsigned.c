#include "main.h"

/**
 * specifierUnsigned - prints unsigned integer
 * @listString: arguments
 * Return: characters printed
 */

int specifierUnsigned(va_list listString)
{
	unsigned int n = va_arg(listString, unsigned int);
	int num, last = n % 10, digit, a = 1, i = 1;

	n = n / 10;

	if (last < 0)
	{
		_putchar('-');
		n = -n;
		last = -last;
		i++;
	}
	num = n;

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			a = a * 10;
			num = num / 10;
		}
		num = n;
		while (a > 0)
		{
			digit = num / a;
			_putchar(digit + '0');
			num = num - (digit * a);
			a = a / 10;
			i++;
		}
	}

	_putchar(last + '0');

	return (i);
}
