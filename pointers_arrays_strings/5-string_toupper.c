#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @s: pointer to the string to be converted
 *
 * Return: pointer to the modified string
 */

char *string_toupper(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
	{
		if (s[idx] >= 'a' && s[idx] <= 'z')
		{
			s[idx] = s[idx] - ('a' - 'A');
		}
		idx++;
	}

	return (s);
}

