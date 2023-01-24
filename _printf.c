#include "main.h"

/**
 * print_buffer - prints out buffer contents
 * @buffer: char array
 * @buff_index: index at which to add next char
 */

void print_buffer(char buffer[], int buff_index)
{
	if (*buff_index > 0)
	{
		write(1, &buffer[0], *buff_index);
	}

	*buff_index = 0;
}

/**
 * _printf - printf implementation
 * @format: format
 * Return: no of printed chars
 */

int _printf(const char *format, ...)
{
	int i;
	int print = print_char = 0;
	int flags, width, precision, size, buff_index = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		buffer[buff_index++] = format[i];
		if (buff_index == BUFF_SIZE)
			print_buffer(buffer, &buff_index);
		print_char++;
		else
		{
			print_buffer(buffer, &buff_index);
			flags = get_flags(format, &i);
			size = get_size(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			i++;

			print = handle_print(format, &i, list, buffer,
					flags, width, precision, size);

			if (print == -1)
				return (-1);
			print_char = print_char + print;
		}
	}
	print_buffer(buffer, &buff_index);
	va_end(list);
	return (print_char);
}
