#include "main.h"

/**
 * char_value - function prints character
 * @char_list: character arguments
 * Return: char count
 */
int char_value(va_list char_list)
{
	_putchar(va_arg(char_list, int));
	return (1);
}
