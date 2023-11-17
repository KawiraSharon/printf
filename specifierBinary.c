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
	char *write_len;

	y = va_arg(list_bin, unsigned int);
	if (y == 0)
		return (_putchar('0'));
	if (y < 1)
		return (-1);
	len_bin = base_len(y, 2);
	ptrStr = malloc(sizeof(char) * len_bin + 1);
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
	write_len = put_val(ptrStr);
	if (write_len == NULL)
		return (-1);
	put_base(write_len);
	free(ptrStr);
	free(write_len);
	return (len);
}
