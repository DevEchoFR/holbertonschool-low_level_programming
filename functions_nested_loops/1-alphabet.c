#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 */
void print_alphabet(void)
{
int i;

for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}

/**
 * main - Entry point, calls print_alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
