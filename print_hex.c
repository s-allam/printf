#include "main.h"

/**
 * print_HEX - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_hex(va_list val)
{
	int i;
	int *tab;
	int count = 0;
	unsigned int num;
	unsigned int tem;

	num = va_arg(val, unsigned int);
	tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count = count + 1;
	}
	count = count + 1;
	tab = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		tab[i] = tem % 16;
		tem = tem / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (tab[i] > 9)
			tab[i] = tab[i] + 7;
		_putchar(tab[i] + '0');
	}
	free(tab);
	return (count);
}
