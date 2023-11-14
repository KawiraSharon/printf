#include "main.h"

/**
 * specifierRot13 - convert to rot 13
 * @stringList: argument
 * Return: printed characters
 */

int specifierRot13(va_list stringList)
{
	int i, j, k, total;
	char *s = va_arg(stringList, char *);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; a[j] != '\n'  && k == 0; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				total++;
				k = 1;
				break;
			}
		}
		if (k == 0)
		{
			_putchar(s[i]);
			total++;
		}

	}
	return (total);
}
