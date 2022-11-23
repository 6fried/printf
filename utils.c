#include "main.h"

/**
 * _putchar - function
 * @c: param
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - function
 * @str: param
 * Return: int
 */
int _puts(char *str)
{
	int i;

	if (str == NULL)
		return (_puts("(null)"));

	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);

	return (i);
}

/**
 * basetostr - function
 * @n: param
 * @base: param
 * Return: char *
 */
char *basetostr(int n, int base)
{
	int tmp, size = 0;
	char rep[] = "0123456789ABCDEF";
	char *buffer, *ptr;

	size = 0;

	if (n < 0)
	{
		n = -n;
		size++;
	}

	tmp = n;

	do {
		tmp = tmp / base;
		size++;
	} while (tmp > 0);

	buffer = malloc(++size * sizeof(char));
	ptr = &buffer[size - 1];
	*ptr = '\0';

	tmp = n;

	do {
		*--ptr = rep[tmp % base];
		tmp /= base;
	} while (tmp != 0);

	if (buffer[0] == 0)
		*--ptr = '-';

	return (buffer);
}

/**
 * handle_flag - function
 * @c: param
 * @ap: param
 * Return: int
 */
int handle_flag(char c, va_list ap)
{
	int n = 0;

	switch (c)
	{
	case 'c':
		n += _putchar(va_arg(ap, int));
		break;
	case 's':
		n += _puts(va_arg(ap, char *));
		break;
	case '%':
		n += _putchar('%');
		break;
	case 'd':
		n += _puts(basetostr(va_arg(ap, int), 10));
		break;
	case 'i':
		n += _puts(basetostr(va_arg(ap, int), 10));
		break;
	case 'b':
		n += _puts(basetostr(va_arg(ap, int), 2));
		break;
	case '\0':
		return (n);
	default:
		n += _putchar('%');
		n += _putchar(c);
		break;
	}
	return (n);
}
