#include "main.h"

/**
 * _putchar - writes char to console
 * @c: denotes character
 * Return: 1 on success, -1 on err
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _puts - write string including null terminator
 * @ptStr: pointer
 * Return: char count
 */
int _puts(char *ptStr)
{
	register short j;

	for (j = 0; ptStr[j]; j++)
		_putchar(ptStr[j]);
	return (j);
}
