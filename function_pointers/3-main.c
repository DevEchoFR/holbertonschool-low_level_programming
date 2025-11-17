#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs a simple operation from command line
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 on success, 98/99/100 on errors
 */

int main(int argc, char *argv[])
{
int (*f)(int, int);
int a, b, res;

if (argc != 4)
{
printf("Error\n");
return (98);
}
f = get_op_func(argv[2]);
if (f == NULL)
{
printf("Error\n");
return (99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
if ((b == 0) && (argv[2][0] == '/' || argv[2][0] == '%'))
{
printf("Error\n");
return (100);
}
res = f(a, b);
printf("%d\n", res);
return (0);
}
