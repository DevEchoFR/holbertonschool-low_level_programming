#include <stdio.h>
/**
 * main - Prints the lowercase alphabet followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
