#include "main.h"

/**
 * specifierRot13 - convert to rot 13
 * @stringList: argument
 * Return: printed characters
 */

int specifierRot13(va_list stringList)
{
	int i, j, total;
	char *s = va_arg(stringList, char *);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(NULL)";
	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				total++;
				break;
			}
		}
	}
	return (total);
}
