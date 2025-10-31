#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @s: pointer to the string to be converted
 *
 * Return: pointer to the modified string
 */

char *string_toupper(char *)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return str;
}
