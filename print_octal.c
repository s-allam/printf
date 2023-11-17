#include "main.h"
/**
 * print_octal - prints an octal number
 * @val: arg
 * Return: count
 */
int print_octal(va_list val)
{
	int a;
	int *arr;
	int count;
	unsigned int n;
	unsigned int t;

	count = 0;
	n = va_arg(val, unsigned int);
	t = n;

	while (n / 8 != 0)
	{
		n = n / 8;
		count = count + 1;
	}
	count = count + 1;
	arr = malloc(count * sizeof(int));

	for (a = 0; a < count; a++)
	{
		arr[a] = t % 8;
		t = t / 8;
	}
	for (a = count - 1; a >= 0; a--)
	{
		_putchar(arr[a] + '0');
	}
	free(arr);
	return (count);
}
