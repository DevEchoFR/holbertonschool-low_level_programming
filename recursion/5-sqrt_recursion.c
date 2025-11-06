#include "main.h"

/**
 * sqrt_helper - helper function to find the square root recursively
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}