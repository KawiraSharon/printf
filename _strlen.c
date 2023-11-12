#include "main.h"

/**
 * _strlen - check length of string
 * @str: string to be checked
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}
