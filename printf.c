

/**
 * _printf - function
 * @format: param
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list arg;

	va_start(arg, format);

	int i;

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
