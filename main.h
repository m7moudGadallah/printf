#ifndef MAIN_H_
#define MAIN_H_

/* C STd Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int _printf(const char *format, ...);

#endif  