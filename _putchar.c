#include <unistd.h>
/**
  *_putchar - This will write to stdout.
  *@c: This is the character to be written.
  *
  *Return:The number of chars written.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

