#include "main.h"
/**
 * handle_match - search for match and execute the right function
 * @match_char: the character to match
 * @match_char_pos: match_char position
 * Return: the function that matches or null
 */
int (*handle_match(const char *match_char, int match_char_pos))(va_list)
{
	int i;

	typedef struct {
		const char *point;
		int (*def)(va_list);
	}
	converter;

	converter option[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"i", print_i},
		{"d", print_d},
		{"b", print_b},
		{"o", print_octal},
		{"u", print_uns},
		{"x", print_hex},
		{"X", print_HEX},
		{"p", print_ptr},
		{"r", print_str_rev},
		{"R", print_13rot},
		{NULL, NULL}
	};

	for (i = 0; option[i].point != NULL; i++)
		if (option[i].point[0] == match_char[match_char_pos])
			return (option[i].def);

	return (NULL);
}
