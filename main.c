#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    
   len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    /**
     *
     *
     */

    _printf("%x", 1024);
    printf("\n");
    _printf("%x", -1024);
    printf("\n");
   _printf("%x", 0);
   printf("\n");
  _printf("%x", UINT_MAX);
  printf("\n");
_printf("There is %x bytes in %x KB\n", 1024, 1);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
_printf("%p", (void *)0x7fff5100b608);
_printf("\n\n\n%S\n", "Best\nSchool");
_printf("%p", NULL);

_printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
_printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
_printf("Can you print an address?\n%p\nNice!\n", (void *)-1);
_printf("%pppp\n", (void *)0x7fff5100b6f8);
len = _printf("\n\n%S", "\n");
len2 = _printf("\n%S", "\x01\x02\x03\x04\x05\x06\x07");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("\nCould you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
len2 = _printf("\n%S\n", "No special character.");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("");
len2 = _printf("\n- What did you say?\n- %S\n- That's what I thought.\n", "");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

return (0);
}
