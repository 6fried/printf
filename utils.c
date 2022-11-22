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

	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);

	return (i);
}

/**
 * dectostr - function
 * @n: param
 * Return: char *
 */
char *dectostr(int n)
{
	int tmp, size;
	char rep[] = "0123456789";
	char *buffer, *ptr;

	tmp = n;
	size = 0;

	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}

	do {
		tmp = tmp / 10;
		size++;
	} while (tmp > 0);

	buffer = malloc(++size * sizeof(char));
	ptr = &buffer[size - 1];
	*ptr = '\0';

	do {
		*--ptr = rep[n % 10];
		n /= 10;
	} while (n != 0);

	return (buffer);
}
