#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: A character string.
 *
 * Return: The number of characters printed (excluding the null
 * byte used to end output to strings).
 */

int _printf(const char *format, ...)
{
	unsigned int i, index = 0, len = 0;
	char ch;
	char *str;
	va_list my_args;

	va_start(my_args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				ch = (char)(va_arg(my_args, int));
				_putchar(ch);
				len++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(my_args, char *);
				for (index = 0; str[index] != '\0'; index++)
				{
					_putchar(str[index]);
					len++;
				}
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				len++;
			}
		}
		else
		_putchar(format[i]);
		len++;
	}
	va_end(my_args);
	return (len);
}
