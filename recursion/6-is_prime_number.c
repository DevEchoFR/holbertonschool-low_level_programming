#include "main.h"
#include <stdio.h>

/**
 * prime - helper function to determine if n is prime
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is a prime number, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
