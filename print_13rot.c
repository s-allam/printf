#include "main.h"
/**
 * print_13rot - converting letters to rot 13
 * @rot: argument
 * Return: count
 */
int print_13rot(va_list rot)
{
	int a;
	int b;
	int count;
	int c;
	char *str;
	char x[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char y[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	count = 0;
	c = 0;
	str = va_arg(rot, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (a = 0; x[a]; a++)
	{
		c = 0;
		for (b = 0; x[b] && !c; b++)
		{
			if (str[a] == x[b])
			{
				_putchar(y[b]);
				count = count + 1;
				c = 1;
			}
		}
		if (!c)
		{
			_putchar(str[a]);
			count = count + 1;
		}
	}
	return (count);
}
