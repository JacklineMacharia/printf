#include "main.h"
/**
  *print_Str - This will print the string.
  *@args: This the list of arguments.
  *@len: This the number of chars.
  *
  *Description: Any char whose ascii code appears between num 0 and num 127,
  *will be replaced with \x.
  *Return: This will return the length of characters printed.
  */
int print_Str(va_list args, int len)
{
	int i;

	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	i = 0;
	while (str[i] != '\0')
	{

		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			if (str[i] < 15)
			{
				len += _printf("\\x0");
				len += _printf("%X", str[i]);
				i++;
			}
			else
			{
				len += _printf("\\x");
				len += _printf("%X", str[i]);
				i++;
			}
		}
		else
		{
			len += _putchar(str[i]);
			i++;
		}
	}
	return (len);
}

