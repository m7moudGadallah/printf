#include "main.h"

/**
 * print_octal - prints an octal number
 * @args: the octal number to print
 *
 * Return: the number of digits printed
 */
int print_octal(va_list val)
{
	unsigned int n = va_arg(val, unsigned int);
	int i, count = 0;
	char *octal;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	octal = malloc(sizeof(char) * 12);
	if (octal == NULL)
		return (-1);

	for (i = 0; n > 0; i++)
	{
		octal[i] = (n % 8) + '0';
		n /= 8;
	}
	octal[i] = '\0';

	for (i = _strlen(octal) - 1; i >= 0; i--)
	{
		_putchar(octal[i]);
		count++;
	}
	free(octal);
	return (count);
}
