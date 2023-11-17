#include "main.h"
#include <stddef.h>

/**
 * printf_char - prints a character
 * @arg : an argument
 * Return : return 1
*/

int printf_char(va_list val)
{
	char string;

	string = va_arg(val, int);
	_putchar(string);
	return (1);
}
