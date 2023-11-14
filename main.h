#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct allocate - defines symbols structure, functions
 *
 * @mtc: operator
 * @u: func associated
 */

typedef struct
{
	char *mtc;
	int (*u)(va_list);
} spec_ifier;

int _printf(const char *format, ...);
int _putchar(char c);
int convert_type(const char *format, spec_ifier form_at[], va_list spec_lyst);
int write_value(va_list number);
int di_no(va_list numbers);
int char_value(va_list char_list);
int string_value(va_list stringList);
int percent_value(__attribute((unused))va_list perc_list);

#endif
