#ifndef MAIN_H_
#define MAIN_H_

/* C STD Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
  * struct format - contains foramt and pointer to its function
  *
  * @flag: format
  * @print_with_format: pointer to function that uses to handle this format
  */
typedef struct format
{
	char *flag;
	int (*print_with_format)();
} formater;

int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int print_octal(unsigned int arg, char *tmp);
int print_hex(unsigned int arg, char *tmp, char to_upper_flag);
int _printf(const char *format, ...);

#endif
