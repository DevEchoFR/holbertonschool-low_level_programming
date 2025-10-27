#include "main.h"

/**
 * more_numbers - entry point to print numbers from 0 to 14
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int i;

	for (i = '0'; i <= '15'; i++)
	{
		_putchar(i * 10 + '0');
	}
	_putchar('\n');
}