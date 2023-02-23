#include "main.h"

/**
 * print_numbers - Prints number from 0-9
 * @void: has no argument list
 * Return: 0
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
	return (0);
}
