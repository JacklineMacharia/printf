#include "main.h"

/**
  * print_octal - This Prints octal base 8 notation of a number
  * @args: This is a list of arguments
  * @len: This is the current length of string
  *
  * Return: This the current length
  */

int print_octal(va_list args, int len)
{
	unsigned int n = va_arg(args, unsigned int);

	len += print_numbers(n, 8, "01234567");

	return (len);
}

