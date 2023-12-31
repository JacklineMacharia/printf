#include "main.h"
/**
  * print_rot13 - This will print the 13th character from the input.
  * @args: This the argument list.
  * @len: This is length.
  *
  * Return: Returns the number of chars printed.
  */
int print_rot13(va_list args, int len)
{
	int i, position;

	char r1[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";

	char *str = va_arg(args, char *);

	if (str == NULL)
		return (-1);

	i = 0;
	position = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
		|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			position = str[i] - 65;
			len += _putchar(r1[position]);
		}
		else
			len += _putchar(str[i]);

		i++;
	}

	return (len);
}

