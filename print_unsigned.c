#include "main.h"

/**
  * print_unsigned- This function Prints an unsigned integer
  * @args: This represents the list of arguments
  * @len: This the current length of string
  *
  * Return: It will return the length
  */

int print_unsigned(va_list args, int len)
{
	unsigned int n = va_arg(args, unsigned int);

	len += print_numbers(n, 10, "0123456789");

	return (len);
}

