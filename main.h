#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct spec_ifier - defines structure for symbols and functions
 *
 * @mtc: The operator is denoted here
 * @u: The function associated is denoted here
 */
typedef struct spec_ifier
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
int percent_value(va_list);

int reverse(va_list stringList);
int specifierRot13(va_list stringList);
int specifierUnsigned(va_list listString);
int specifierOctal(va_list listString);
int specifierhex(va_list listString);
int specifierHEX(va_list listString);
int specifierS(va_list listString);

int specifier_binary(va_list list_bin);
char *conv_spc(char *k);
char *_memcpy(char *dest, char *source, unsigned int j);
void put_base(char *ptrStr);
unsigned int find_base(unsigned int find_len, int len)

#endif
