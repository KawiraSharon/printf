#include "main.h"

/**
 * reverse - print reverse of string
 * @stringList: argument
 * Return: Number of printed strings
 */

int reverse(va_list stringList)
{
	char *s = va_arg(stringList, char *);
	int i;
	int a = 0;

	if (s == NULL)
		s = "(null)";
	while (s[a] != '\0')
		j++;
	for (i = a - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
