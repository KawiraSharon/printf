#include "main.h"

/**
 * specifier_String - print specific string defined.
 * @list_S: string parameters
 * Return: string length
 */

int specifier_String(va_list list_S)
{
	register short length = 0;
	char *ptrStr, *m = va_arg(list_S, char *);
	int counter;

	if (!m)
		return (_puts(STRING_NULL));
	for (; *m; m++)
	{
		if (isNonAlphaNumeric(*m))
		{
			counter += _puts("\\x");
			ptrStr = match(*m, 16, 0);
			if (!ptrStr[1])
				length += _putchar('0');
			length += _puts(ptrStr);
		}
		else
			length += _putchar(*m);
	}
	return (length);
}

/**
 * isNonAlphaNumeric - custom function to find if or not func is alphanumeric
 * as is in ascii characters
 * @d: defined input characters
 * Return: validification of whether true or not
 */
int isNonAlphaNumeric(char d)
{
	return ((d > 0 && d < 32) || d >= 127);
}

/**
 * match - match given no to string
 * @number: input number
 * @b_Ase: base being input
 * @lower_Alpha: flag for hexa values that need to be lowercased
 * Return: the string result
 */
char *match(unsigned long int number, int b_Ase, int lower_Alpha)
{
	static char *per;
	static char array[50];
	char *ptrhex;

	per = (lower_Alpha)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptrhex = &array[49];
	*ptrhex = NUL;
	do {
		*--ptrhex = per[number % b_Ase];
		number /= b_Ase;
	}

	while (number);

	return (ptrhex);
}
