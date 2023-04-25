#include "main.h"

/**
  * printf_dec_aux - print decimal
  *
  * @num: decimal number
  */
void printf_dec_aux(int num)
{
	if (!num)
		return;

	printf_dec_aux(num / 10);

	_putchar((num % 10) + '0');
}

/**
  * printf_dec- print integers
  *
  * @val: integer
  *
  * Return: number of digits printed
  */
int printf_dec(va_list val)
{
	int num = va_arg(val, int);
	int digit_count = 0;
	int tmp = num;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		digit_count++;
	}

	if (num == 0)
	{
		_putchar('0');
		digit_count++;
	}

	while (tmp > 0)
	{
		tmp /= 10;
		digit_count++;
	}

	printf_dec_aux(num);

	return (digit_count);
}
