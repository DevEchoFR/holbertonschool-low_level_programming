#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @s: pointer to the string to be converted
 *
 * Return: pointer to the modified string
 */

char *string_toupper(char *str)
{
	int idx = 0;

	while (str[idx] != '\0')
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			str[idx] = str[idx] - ('a' - 'A');
		}
		idx++;
	}

	return (str);
}
