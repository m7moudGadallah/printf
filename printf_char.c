#include "main.h"

/**
  * printf_char - print formated char
  *
  * @val: argument list passed to printf
  * Return: (1) i.e printf one char
  */
int printf_char(va_list val)
{
	char ch = va_arg(val, int);

	_putchar(ch);

	return (1);
}
