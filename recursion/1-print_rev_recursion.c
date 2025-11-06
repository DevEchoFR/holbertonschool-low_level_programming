#include "main.h"

void _print_rev_recursion(char *s)
{
	char first_char = *s;
	if (first_char == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(first_char);
}