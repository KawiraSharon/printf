#include "main.h"

/**
 * base_len - calculate binary number length
 * @num: number we are looking len for
 * @base: base being used
 * Return: positive int for len
 */
unsigned int find_base(unsigned int num, int base)
{
	unsigned int j;

	for (j = 0; num > 0; j++)
	{
		num = num / base;
	}
	return (j);
}


/**
 * write_len - obtain length of string
 *
 * @s: binaries being read reverse wise
 * Return: char pointer
 */
char *write_len(char *s)
{
	int len;
	int head;
	char temporal;
	char *ptr_dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	ptr_dest = malloc(sizeof(char) * len + 1);
	if (ptr_dest == NULL)
		return (NULL);

	_memcpy(ptr_dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		temporal = ptr_dest[len - 1];
		ptr_dest[len - 1] = ptr_dest[head];
		ptr_dest[head] = temporal;
	}
	return (ptr_dest);
}

/**
 * put_base - chars to be passed to console
 * @str: char pointer being parsed
 */
void find_base(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		_putchar(str[x]);
}


/**
 * _memcpy - clone of memcpy to copy memory area
 * @dest: intended destination for paste
 * @source: the source from which to copy
 * @j: bytes being copied by use of _memcpy
 * Return: destination pointer
 */
char *_memcpy(char *dest, char *source, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		dest[m] = source[m];
	dest[m] = '\0';
	return (dest);
}

/**
 * char_hex - check for hex function being called
 * @num: item being converted to letter
 * @i: identify function being called by hex
 * Return: corresponding ascii value for char denoted
 */
int char_hex(int num, char i)
{
	char *low_hex = "abcdef";
	char *upper_Hex = "ABCDEF";

	num = num - 10;
	if (i == 'i')
		return (low_hex[num]);
	else
		return (upper_Hex[num]);
	return (0);
}