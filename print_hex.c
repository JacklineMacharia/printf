#include "main.h"

/**
  * print_hex - This function prints hex notation of a number
  * @args: This the list of arguments
  * @len: The current length of string
  *
  * Return: The length
  */

int print_hex(va_list args, int len)
{
	unsigned int n = va_arg(args, unsigned int);

	len += print_numbers(n, 16, "0123456789abcdef");

	return (len);
}

/**
  * print_heX - The pinted hexes
  * @args: This the argument list
  * @len: The current length of string
  *
  * Return: The length
  */

int print_heX(va_list args, int len)
{
	unsigned int n = va_arg(args, unsigned int);

	len += print_numbers(n, 16, "0123456789ABCDEF");
	return (len);
}

