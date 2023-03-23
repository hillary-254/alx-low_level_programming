#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	int num;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		num = va_arg(args, int);

		printf("%d", num);

		if (x != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
