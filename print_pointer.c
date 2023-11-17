#include "main.h"
/**
 * print_ptr - prints the pointed hexadecimal number
 * @val: arg
 * Return: either i or number of str
 */
int print_ptr(va_list val)
{
	void *ptr;
	char *str;
	long int a;
	int b;
	int i;

	str = "(nil)";
	ptr = va_arg(val, void*);

	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');

	b = print_small_hextra(a);
	return (b + 2);
}
