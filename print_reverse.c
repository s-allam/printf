#include "main.h"
/**
 * print_str_rev - prints string in reverse
 * @rev: argument
 * Return: string in reverse
 */
int print_str_rev(va_list rev)
{
	char *str;
	int a;
	int b;

	str = va_arg(rev, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[b] != '\0')
	{
		b = b + 1;
	}
	a = b - 1;
	while (a >= 0)
	{
		_putchar(str[a]);
		a--;
	}
	return (b);
}
