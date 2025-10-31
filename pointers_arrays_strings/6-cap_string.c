#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string to be modified
 *
 * Return: pointer to the modified string
 */

char *cap_string(char *s)
{
	int i = 0;

	/* Capitalize the first character if it's a lowercase letter */
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - ('a' - 'A');
	}
	i++;

	/* Traverse the string */
	while (s[i] != '\0')
	{
		/* Check for delimiters */
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
		    s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		    s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		    s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		    s[i - 1] == '}')
		{
			/* Capitalize if current character is a lowercase letter */
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - ('a' - 'A');
			}
		}
		i++;
	}

	return (s);
}
