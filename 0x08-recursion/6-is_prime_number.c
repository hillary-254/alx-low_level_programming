#include "main.h"


/**
 * _prime - Check if number is prime
 * @n: number to be checked
 * @x: the iteration times
 * Return: 1 for prime or 0 composite
 */

int _prime(int n, int x)
{
	if (n <= 1)
		return (0);

	if (n % x == 0 && x > 1)
		return (0);

	if ((n / x) < x)
		return (1);

	return (_prime(n, x + 1));
}

/**
 * is_prime_number - Returns if a number is prime
 * @n: number to be checked
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}
