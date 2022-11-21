#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - function
 * @format: param
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list arg;

	va_start(arg, format);

	int i, j;
	signed int n

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{
			case 'c':
				char c = va_arg(arg, int);

				write(1, &c, 1);
				break;
			case 's':
				int j;

				char *str = va_arg(arg, char *);

				for (j = 0; str[j] != '\0'; j++)
					write(1, &str[j], 1);
				break;
			case '%':
				write(1, "%%", 1);
				break;
			case 'd':
				n = va_arg(arg, int);
				if (n < 0)
				{
					n = -n;
					write(1, "-", 1);
				}
				static char rep[] = "0123456789ABCDEF";
				static char buffer[50];
				char *ptr;

				ptr = &buffer[49];
				*ptr = '\0';

				do
				{
					*--ptr = rep[n%10];
					n /= 10;
				}while(n != 0);

				for (j = 0; ptr[j] != '\0'; j++)
				{
					write(1, &ptr[j], 1);
				}
				break;
			case 'i':
				break;
			default:
				break;
			}
		}
		va_end(arg);
	}
}
