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

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf(NULL);
	printf(NULL);
	_printf("%");
	printf("%");
	_printf("%!\n");
	printf("%!\n");
	_printf("%K\n");
	printf("%K\n");
	return (0);
}