#include <stdio.h>
/**
 * main - Prints the lowercase alphabet followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if(i == '9')
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return 0;
}
