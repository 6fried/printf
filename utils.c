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
		n = -n - 1;
		size++;
	}

	tmp = n;

	do {
		tmp = tmp / base;
		size++;
	} while (tmp > 0);

	buffer = malloc(++size * sizeof(char));

	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}

	ptr = &buffer[size - 1];
	*ptr = '\0';

	tmp = n;

	*--ptr = rep[(tmp % base) + 1];
	tmp /= base;

	do {
		*--ptr = rep[tmp % base];
		tmp /= base;
	} while (tmp != 0);

	if (buffer[0] == 0)
		*--ptr = '-';

	return (buffer);
}
