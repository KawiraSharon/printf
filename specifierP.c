#include "main.h"

/**
 * specifierP - print pointer
 * @listStrign: arguments
 * Return: no of printed arguments
 */

int specifierP(va_list listString)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int i, j;

	p = va_arg(listString, void *);
	if (!p)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}

	a = (long int) p;
	_putchar('0');
	_putchar('x');
	j = specifierhexP(a);
	return (j + 2);
}
