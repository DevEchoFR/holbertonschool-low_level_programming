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

	/* Handle optional sign */
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
	       s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert characters to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}