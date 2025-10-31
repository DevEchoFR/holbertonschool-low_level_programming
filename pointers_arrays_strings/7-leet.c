#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to the string to be encoded
 *
 * Return: pointer to the modified string
 */

char *leet(char *s)
{
	int p = 0, j;
	char leet_map_src[] = "aAeEoOtTlL";
	char leet_map_dst[] = "4433007711";

	while (s[p] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[p] == leet_map_src[j])
			{
				s[p] = leet_map_dst[j];
				break;
			}
		}
		p++;
	}

	return (s);
}
