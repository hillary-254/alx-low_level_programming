#include "main.h"

/**
 * _sqrt - calculates natural sqrt
 *@n: input number
 *@x: used for iteration
 *Return: integer
 */

int _sqrt(int n, int x)
{
	int sq = x * x;

	if (sq > n)
	{
		return (-1);
	}
	if (sq == n)
	{
		return (x);
	}
	return (_sqrt(n, x + 1));
}

/**
 *  _sqrt_recursion - returns the natural square root of a number.
 *@n: input number
 *Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

