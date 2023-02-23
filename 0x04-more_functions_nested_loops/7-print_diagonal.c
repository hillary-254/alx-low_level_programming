#include "main.h"

/**
 * print_diagonal - prints a diagonal shape
 * @n: input
 * Return: 0
 */
void print_diagonal(int n)
{
	int count, size;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (size = 0; size < count; size++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (count == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
