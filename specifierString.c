#include "main.h"

/**
 * string_value - writes value of character pointer
 * @stringList: variable arguments; strings format
 * Return: string char count
 */
int string_value(va_list stringList)
{
	int j;
	char *ptrStr;

	ptrStr = va_arg(stringList, char *);
	if (ptrStr == NULL)
		ptrStr = "(null)";
	fflush(stdout);
	for (j = 0; ptrStr[j] != '\0'; j++)
		_putchar(ptrStr[j]);
	return (j);
}
