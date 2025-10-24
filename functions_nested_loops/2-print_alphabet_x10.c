#include "main.h"

/**
 * print_alphabet - Prints 10 time the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
int alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
}
