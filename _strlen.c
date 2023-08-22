#include "main.h"

/**
 * _strlen - give the length of the string
 * @str: the string
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
