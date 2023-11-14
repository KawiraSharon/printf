#include "main.h"

/**
 * specifierBinary - handle unsigned to binary
 * @listString: arguments
 * Return: no of printed characters
 */

int specifierBinary(va_list listString)
{
	int total, i, j;
	unsigned int num;
	char a[64] = { 0 };

	num = va_arg(listString, unsigned int);

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
