#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/**
 * struct match - denote symbol structure
 * @mstruct: operator
 * @j: function associated
 */
typedef struct match
{
	char mstruct;
	int (*j)(va_list);
}init;


int _printf(const char *format, ...);
int spec_result(const char *format, init spec_char[], va_list spec_lyst);
int _putchar(char c);
int putdi(va_list lyst);
int find_no(va_list total);

#endif
