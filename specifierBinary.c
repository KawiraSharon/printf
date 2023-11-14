#include "main.h"

/**
 * specifierBinary - handle unsigned to binary
 * @n: number to convert
 * Return: no of printed characters
 */

int specifierBinary(va_list listString)
{
	unsigned int num, total;
	int i, j, rem;
	char binaries[] = {"01"};
	char buffer[64] = { 0 };

	num = va_arg(listString, unsigned int);

	for (i = 0; num > 0; i++)
	{
		rem = num % 2;
		num = num / 2;
		buffer[i] = binaries[rem];
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		total++;
	}

	return (total);
}
