#include "main.h"

/**
 * specifierBinary - handle unsigned to binary
 * @n: number to convert
 * Return: no of printed characters
 */

int specifierBinary(va_list listString)
{
	unsigned int a[10], num, total;
	int i, j;

	num = va_arg(listString, unsigned int);

	for (i = 0; num > 0; i++)
	{
		a[i] = num % 2;
		num = num / 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(a[j] + '0');
		total++;
	}

	return (total);
}
