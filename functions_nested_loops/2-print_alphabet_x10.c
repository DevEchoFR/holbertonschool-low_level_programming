#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times, each followed by a newline
 *
 * Return: None
 */

void print_alphabet_x10(void)
{
int i;
int alphabet;

for (i = 0; i < 10; i++)
{
for (alphabet = 97; alphabet <= 122; alphabet++)
{
_putchar(alphabet);

}
_putchar('\n');
}
}

/**
 * main - Entry point, calls print_alphabet_x10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
