#include "main.h"
/**
 * _printf - printf input and specifiers
 * @format: input
 * Return: len or error
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	unsigned int c, length = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (c = 0; format[c]; c++)
	{
		if (format[c] == '%')
		{
			if (format[c + 1] == '%')
			{   _putchar('%');
				c = c + 1;
				length++;
			}
			else if (handle_match(format, c + 1) != NULL)
			{   length += handle_match(format, c + 1)(arguments);
				c = c + 1;
			}
			else
			{ _putchar(format[c]);
				length++;
			}
		}
		else
		{ _putchar(format[c]);
			length++;
		}
	}
	va_end(arguments);
	return (length);
}
