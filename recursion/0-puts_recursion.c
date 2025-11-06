#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			return;
		}
		else
		{
			break;
		}
		break;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}