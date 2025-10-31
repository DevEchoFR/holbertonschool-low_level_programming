#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates at most n bytes from the string pointed to by src
 *            to the end of the string pointed to by dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to concatenate from src
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
