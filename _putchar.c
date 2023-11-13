#include "main.h"

/**
 * _putchar - function to print one character
 * @c: character to be printed
 * Return: 0 on implementation success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - take character pointer, string to console, includes '\0'
 * @ptStr: character pointer; holds string value
 * Return: chat total no.
 */
int _puts(char *ptStr)
{
	register short q;

	for (q = 0; ptStr[q]; q++)
		_putchar(ptStr[q]);
	return (q);
}
