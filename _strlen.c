#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: a string pointer param
 * Return: i which is the length
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
			;
		return (i);
}

/** _strlenc - Strlen applied for constant char pointer str
 * @str: char pointer
 * Return: i which is the length
*/

int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
			;
		return (i);
}
