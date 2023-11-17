#include "main.h"

/**
 * specifier_binary - change decimal to binary value
 * @list_bin: argument list
 * Return: len of characters written
 */
int specifier_binary(va_list list_bin)
{
	unsigned int y;
	int m, len;
	char *ptrStr;
	char *len_bin;

	y = va_arg(list_bin, unsigned int);
	if (y == 0)
		return (_putchar('0'));
	if (y < 1)
		return (-1);
	len = find_base(y, 2);
	ptrStr = malloc(sizeof(char) * len + 1);
	if (ptrStr == NULL)
		return (-1);

	for (m = 0; y > 0; m++)
	{
		if (y % 2 == 0)
			ptrStr[m] = '0';
		else
			ptrStr[m] = '1';
		y = y / 2;
	}
	ptrStr[m] = '\0';
	len_bin = write_len(ptrStr);
	if (len_bin == NULL)
		return (-1);
	new_base(len_bin);
	free(ptrStr);
	free(len_bin);
	return (len);
}
