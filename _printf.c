#include "main.h"

/**
  * print_with_format - recognize format on passed buffer and
  * return pointer to its function
  *
  * @buffer: pointer to string
  * @idx: pointer to index that start from it
  * Return: (NULL) if format not recognized, otherwise pointer to function
  */
int (*print_with_format(const char *buffer, int *idx))()
{
	/* format dictionary maps formats with it's functions */
	formater format_dic[] = {
		{"c", printf_char}
	};

	int dic_len = 1;		/* lenght of format_dic */
	int tmp_idx = *idx;
	int j;

	/* iterate over format_dic to check if any format matched */
	while (dic_len--)
	{
		tmp_idx = *idx;
		j = 0;

		while (buffer[tmp_idx] && format_dic[dic_len].flag[j]
				&& buffer[tmp_idx] == format_dic[dic_len].flag[j])
			++tmp_idx, ++j;

		/* current flag in format_dic matched */
		if (!format_dic[dic_len].flag[j])
			break;
	}
	/* no flag in format_dic matched */
	if (dic_len < 0)
		return (NULL);

	/* move idx to point on char after format */
	*idx = tmp_idx;

	return (format_dic[0].print_with_format);
}

/**
  * _printf - print buffer stream to output stream
  *
  * @format: buffer of chars
  * @...: formated arguments
  * Return: number of chars that printf sucessfully printed them
  */
int _printf(const char *format, ...)
{
	int idx = 0,
		written = 0,
		tmp_idx = 0;

	int (*formated_printf)();
	va_list args;

	if (!format)		/* case of nullable buffer */
		return (-1);

	va_start(args, format);

	while (format[idx])
	{
		if (format[idx] == '%')		/* case with formatting */
		{
			++idx;	/* move idx to the beginning of format flags */
			formated_printf = print_with_format(foramat, &idx);

			if (!formated_printf)
				return (written);

			written += formated_printf(args);
		}
		else		/* case of chars in buffer */
		{
			_putchar(format[idx++]);
			++written;
		}
	}

	va_end(args);

	return (written);
}
