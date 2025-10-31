#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @s: pointer to the string to be converted
 *
 * Return: pointer to the modified string
 */

char *string_toupper(char *str)
{
	int ptr = 0;

	while (str[ptr] != '\0')
	{
		if (str[ptr] >= 'a' && str[ptr] <= 'z')
		{
			str[ptr] = str[ptr] - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
