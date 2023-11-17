#include "main.h"

/**
 * specifierhexP - handle conversion x
 * @listString: arguments
 * Return: printed characters
 */

int specifierhexP(unsigned long int num)
{
	int i, total = 0;
	unsigned long int *array;
	unsigned long int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		total++;
	}
	total++;
	array = malloc(sizeof(unsigned long int) * total);
	if (array == NULL)
		return (0);
	for (i = 0; i < total; i++)
	{
		array[i] = tem % 16;
		tem = tem / 16;
	}
	for (i = total - 1; i >= 0; i--)
	{
		if (array[i] > 9)
		{
			array[i] = array[i] - 9;
			_putchar(array[i] + 96);
		} else
		{
			_putchar(array[i] + '0');
		}
	}
	free(array);
	return (total);
}
