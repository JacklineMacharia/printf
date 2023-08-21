#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct format - Struct defines format specifier,corresponding function
 * @specifier: The format specifier character
 * @function: The function pointer to the corresponding print function
 */
typedef struct format
{
	char specifier;
	int (*function)(va_list);

}
format_t;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_integer(va_list args);
int print_unsigned(va_list args);
int print_hexadecimal(va_list args);
int print_octal(va_list args);
int print_pointer(va_list args);
int print_percent(va_list args);

#endif /* MAIN_H */

