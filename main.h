#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
char *dectostr(int n);
#endif
