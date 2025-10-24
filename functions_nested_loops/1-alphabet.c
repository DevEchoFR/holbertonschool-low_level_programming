#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */

void print_alphabet(void)
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

