#include "main.h"

/**
 * new_printf - the function that handles d and i
 * @format: the format of the input character
 * Return: 0 as succes
 */

int new_printf(const char *format, ...)
{
	int length, num;
	char buffer[20];

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			num = va_arg(args, int);
			length = snprintf(buffer, 20, "%d", num);
			write(1, buffer, length);
			format += 2;
		}
		else
		{
			write(1, format, 1);
			format++;
		}
	}

	va_end(args);
	return (0);
}


