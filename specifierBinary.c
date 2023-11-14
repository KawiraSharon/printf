#include "main.h"

/**
 * specifierBinary - handle unsigned to binary
 * @listString: arguments
 * Return: no of printed characters
 */

int specifierBinary(va_list listString)
{
	int a[64], total, i, j;
	unsigned int num;

	num = va_arg(listString, unsigned int);

	if (!num)
		return (-1);
	for  (i = 0; num > 0; i++)
	{
		a[i] = num % 2;
		num /= 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(a[j] + '0');
		total++;
	}

	return (total);
}
