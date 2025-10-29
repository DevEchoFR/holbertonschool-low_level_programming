#include "main.h"
#include <stdio.h>

/**
  *main - prints in reverse
  *Return: 0
*/

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
	return 0;
}