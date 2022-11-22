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
	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				n += _putchar(va_arg(arg, int));
				break;
			case 's':
				n += _puts(va_arg(arg, char *));
				break;
			case '%':
				n += _putchar('%');
				break;
			case 'd':
				n += _puts(basetostr(va_arg(arg, int), 10));
				break;
			case 'i':
				n += _puts(basetostr(va_arg(arg, int), 10));
				break;
			case '\0':
				_puts("");
				break;
			default:
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			n++;
		}
		va_end(arg);
	}
	return (n);
}
