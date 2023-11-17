#include "main.h"

/**
 * specifierhex - handle conversion x
 * @listString: arguments
 * Return: printed characters
 */

int specifierhex(va_list listString)
{
	int i, total = 0;
	int *array;
	unsigned int num = va_arg(listString, unsigned int);
	unsigned int temporary = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		total++;
	}
	total++;
	array = malloc(sizeof(int) * total);
	if (array == NULL)
		return (0);
	for (i = 0; i < total; i++)
	{
		array[i] = temporary % 16;
		temporary /= 16;
	}
	for (i =  total - 1; i >= 0; i++)
	{
		if (array[i] > 9)
		{
			array[i] += 39;
		}
		_putchar(array[i] + '0');
	}
	free(array);

	return (total);
}