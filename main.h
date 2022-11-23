#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
char *basetostr(int n, int base);
int handle_flag(char c, va_list ap);
#endif
