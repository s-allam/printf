#include "main.h"
/**
 * print_uns - print and unsigned integer
 * @uns: argument
 * Return: the unsigned int
 */
int print_uns(va_list uns)
{
	unsigned int v;
	int num;
	int a;
	int l;
	int d;
	int e;

	v = va_arg(uns, unsigned int);
	l = v % 10;
	e = 1;
	a = 1;


	v = v / 10;
	num = v;

	if (l < 0)
	{
		_putchar('-');
		num = -num;
		l = -l;
		v = -v;
		a = a + 1;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			e = e * 10;
			num = num / 10;
		}
		num = v;
		for (; e > 0; e /= 10)
		{
			d = num / e;
			_putchar(d + '0');
			num = num - (d * e);
			a = a + 1;
		}
	}
	_putchar(l + '0');
	return (a);
}
