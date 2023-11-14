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

    len = new_printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    new_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    new_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    new_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    new_printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    new_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    new_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    new_printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    new_printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = new_printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    new_printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    new_printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
