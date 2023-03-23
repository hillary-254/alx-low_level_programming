#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: ...
 * Return: integer, sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
