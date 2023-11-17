#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NUL '\0'
#define STRING_NULL "(null)"

/**
 * struct spec_ifier - defines structure for symbols and functions
 *
 * @mtc: The operator is denoted here
 * @i: The function associated is denoted here
 */
typedef struct spec_ifier
{
	char *mtc;
	int (*i)(va_list);
} spec_ifier;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *ptStr);
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
/*int specifierS(va_list listString);*/
int specifierP(va_list listString);
int specifierhexP(unsigned long int num);
char *match(unsigned long int number, int b_Ase, int lower_Alpha);
int string_value(va_list stringList);
int isNonAlphaNumeric(char d);
int specifier_String(va_list list_S);

/*binary task helper functions*/
int specifier_binary(va_list list_bin);
unsigned int find_base(unsigned int num, int base);
char *write_len(char *s);
char *_memcpy(char *dest, char *source, unsigned int n);
int char_hex(int num, char i);
void new_base(char *str);

#endif
