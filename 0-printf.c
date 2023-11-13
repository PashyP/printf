#include "main.h"

/**
 * _printf - a function as a prototype of the printf of the library
 * @format: the format of the inputs
 * Return: alpha
 */
int _printf(const char *format, ...)
{
	int alpha = 0;
	va_list list;

	va_start(list, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format++, 1);
			alpha++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				write(1, format++, 1);
				alpha++;
			} else if (*format == 'c')
			{
				char is_c = va_arg(list, int);

				write(1, &is_c, 1);
				format++;
				alpha++;
			} else if (*format == 's')
			{
				char *is_s = va_arg(list, char*);

				while (*is_s)
				{
					write(1, is_s++, 1);
					alpha++;
				}
				format++;
			}
		}
	}
	va_end(list);
	return (alpha);
}

