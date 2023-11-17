#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct convert - converts in printf
 * @point: char pointer of the char after %
 * @def : function for the conversion
*/

typedef struct convert
{
	const char *point;
	int (*def)(va_list);
} converter;

/*_printf.c*/
int _printf(const char *format, ...);
/*_putchar.c */
int _putchar(char c);
/* print_c.c */
int printf_char(va_list val);
/*print_s.c*/
int printf_string(va_list agr);
/*_strlen.c*/
int _strlen(char *str);
int _strlenc(const char *str);
/*print_%.c */
int printf_37(void);
/*print_int.c*/
int print_i(va_list args);
int print_d(va_list args);
/*print_b.c*/
int print_b(va_list val);
/*print_Hex.c*/
int print_HEX(va_list val);
/*print_str_exc*/
int print_str_exc(va_list val);
/*print_extra_hex*/
int print_extra_Hex(unsigned int n);
/* print_octal */
int print_octal(va_list val);
/*print_small_hex_extra.c*/
int print_small_hextra(unsigned long int n);
/*print_13rot.c */
int print_13rot(va_list rot);
/*print_reverse*/
int print_str_rev(va_list rev);
/*print_unsigned*/
int print_uns(va_list uns);
int print_ptr(va_list val);
int (*handle_match(const char *match_char, int match_char_pos))(va_list);
int print_hex(va_list val);
#endif
