#include "main.h"

/**
 * print_line - Prints dashes
 * @n: input given
 * Return: void
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
