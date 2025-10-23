#include "main.h"

/**
 * main - Prints _putchar followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
int chars[] = {95, 112, 117, 116, 99, 104, 97, 114, 10};
int i;

for (i = 0; i < 9; i++)
{
_putchar(chars[i]);
}
return (0);
}
