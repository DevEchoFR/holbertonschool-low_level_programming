#include "main.h"
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Return: 0 if successful, 1 if error
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *s = argv[i];
		int val = 0;

		if (*s == '+')
			s++;

		if (*s == '\0')
		{
			printf("Error\n");
			return (1);
		}

		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			val = val * 10 + (s[j] - '0');
		}

		sum += val;
	}

	printf("%d\n", sum);
	return (0);
}
