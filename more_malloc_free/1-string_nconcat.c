#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the newly allocated space in memory
 *         containing the concatenated string
 *         NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *new_str;

	if (s1)
	{
		while (s1[len1])
			len1++;
	}
	if (s2)
	{
		while (s2[len2])
			len2++;
	}
	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);
	if (!new_str)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (i = 0; i < n; i++)
		new_str[len1 + i] = s2[i];
	new_str[len1 + n] = '\0';

	return (new_str);
}
