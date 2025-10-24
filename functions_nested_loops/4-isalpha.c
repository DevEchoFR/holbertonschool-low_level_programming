#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic (lowercase or uppercase)
 *
 * @c: The character to check, passed as an integer
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}

/**
 * main - Entry point, tests _isalpha
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int result;

result = _isalpha('a');
_putchar(result + '0');
_putchar('\n');
result = _isalpha('A');
_putchar(result + '0');
_putchar('\n');
result = _isalpha('3');
_putchar(result + '0');
_putchar('\n');
return (0);
}

