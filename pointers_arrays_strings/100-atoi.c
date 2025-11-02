#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int result, sign, found_digit = 0, max, min;

	result = 0;
	sign = 1;
	max = 2147483647;
	min = -2147483648;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			result = result * 10 + (*s - '0');

			if (sign == 1 && result > max)
				return (max);
			else if (sign == -1 && -result < min)
				return (min);
		}
		else if (found_digit)
			break;

		s++;
	}
}