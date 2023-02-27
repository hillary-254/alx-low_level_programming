#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer variable
 * Return: void;
 */

void print_rev(char *s)
{
	int x;

	int size = strlen(s);

	for (x = size - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
