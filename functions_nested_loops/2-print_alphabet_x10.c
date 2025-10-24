#include "main.h"

/**
 * print_alphabet - Prints 10 time the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
int number, alphabet;
number = '0';
while (number < '10')
{
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
number++;
}
}
