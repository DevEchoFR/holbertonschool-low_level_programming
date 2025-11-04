#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
		if (accept[b] == '\0')
			return (c);
	}
	return (c);
}
