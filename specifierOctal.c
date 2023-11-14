#include "main.h"

/**
 * specifierOctal - handle octal
 * @listString: arguments
 * Return: printed characters
 */

int specifierOctal(va_list listString)
{
	int i, total = 0;
	int *array;
	unsigned int num = va_arg(listString, unsigned int);
	unsigned int temporary = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		total++;
	}
	total++;
	array = malloc(sizeof(int) * total);
	if (array == NULL)
		return (0);
	for (i = 0; i < total; i++)
	{
		array[i] = temporary % 8;
		temporary /= 8;
	}
	for (i = total - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);

	return (total);
}
