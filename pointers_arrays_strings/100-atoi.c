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
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
	int found_digit = 0;

	/* Skip leading whitespace */
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
	       s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
	{
		i++;
	}

	/* Check for optional sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/* Convert digits to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		found_digit = 1;
		result = result * 10 + (s[i] - '0');
		i++;
	}

	if (!found_digit)
		return (0);

	return (result * sign);
}
