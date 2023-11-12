#include "main.h"

/**
 * _strLen - check length of string
 * @str: string to be checked
 *
 * Return: length of string as initialized
 */

int _strLen(char *str)
{
	/*initialize string for which to obtain length*/
	int i = 0;

	/*loop through string to obtain length excluding '\0'*/
	while (str[i] && str[i] != '\0')
	{
		i++;
	}

	return (i);
}
