#include "main.h"

/**
  * printf_int - print an ineger number in an decimal format
  *
  * @val: integer value
  *
  * Return: number of digit printed
  */
int printf_int(va_list val)
{
	return (printf_dec(val));
}
