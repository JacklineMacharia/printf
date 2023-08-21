#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: Format string containing directives
 * @...: Variable arguments based on format specifiers
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			if (*format == 'c')
				count += print_char(va_arg(args, int));
			else if (*format == 's')
				count += print_string(va_arg(args, char *));
			else if (*format == '%')
				count += write(1, "%", 1);
			else
				count += write(1, &(*format), 1);
		}
		else
			count += write(1, &(*format), 1);
		format++;
	}
	va_end(args);
	return (count);
}

/**
 * print_char - Print a single character
 * @args: va_list containing the character to print
 *
 * Return: Number of characters printed (always 1)
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}

/**
 * print_string - Print a string
 * @args: va_list containing the string to print
 *
 * Return: Number of characters printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str)
	{
		while (str[len])
			len += write(1, &str[len], 1);
	}
	else
	{
		len += write(1, "(null)", 6);
	}
	return (len);
}

