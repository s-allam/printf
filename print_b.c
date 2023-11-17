#include "main.h"

/**
 * print_b - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_b(va_list val)
{
	int f = 0;
	int count = 0;
	int i;
	int a = 1;
	int b;
	unsigned int num;
	unsigned int p;

	num = va_arg(val, unsigned int);

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			f = 1;
		if (f)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
