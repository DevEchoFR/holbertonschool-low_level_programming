#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int reverse = 0;

	while (s[reverse] != '\0')
	{
		reverse++;
	}
	for (reverse = reverse - 1; reverse >= 0; reverse--)
	{
		_putchar(s[reverse]);
	}
	_putchar('\n');
}
