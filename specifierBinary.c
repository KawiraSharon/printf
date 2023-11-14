#include "main.h"

/**
 * specifierBinary - handle unsigned to binary
 * @n: number to convert
 * Return: no of printed characters
 */

int specifierBinary(va_list listString)
{
	unsigned int num, total;
	int i, j;
	char buffer[64] = { 0 };

	num = va_arg(listString, unsigned int);

	for (i = 0; num > 0; i++)
	{
		buffer[i++] = num % 2;
		num = num / 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j] + '0');
		total++;
	}

	return (total);
}
