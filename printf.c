#include "main.h"
#include <stdio.h>

/**
 * _printf - function
 * @format: param
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i, n = 0;
	va_list ap;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
			n += handle_flag(format[++i], ap);
		else
			n += _putchar(format[i]);
		va_end(ap);
	}
	return (n);
}

