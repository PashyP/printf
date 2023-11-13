#ifndef MAIN_H
#define MAIN_H

#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list ap);
int print_unsigned(va_list args);
int print_string(va_list ap);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_octal(va_list val);
int print_address(va_list val);
int print_S(va_list ap);
int print_binary(va_list ap);

#endif
