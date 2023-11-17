#include "main.h"
/**
 * print_small_hextra - prints lowrcase of hexadecimal
 * @n: arg
 * Return: count (Success)
 */
int print_small_hextra(unsigned long int n)
{
	long int a;
	long int *arr;
	long int count;
	unsigned long int t;

	count = 0;
	t = n;

	while (n / 16 != 0)
	{
		n = n / 16;
		count = count + 1;
	}
	count = count + 1;
	arr = malloc(count * sizeof(long int));

	for (a = 0; a < count; a++)
	{
		arr[a] = t % 16;
		t = t / 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (arr[a] > 9)
			arr[a] = arr[a] + 39;
		_putchar(arr[a] + '\0');
	}
	free(arr);
	return (count);
}
