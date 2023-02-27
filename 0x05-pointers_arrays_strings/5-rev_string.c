#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: pointer variable parameter
 * Return: 0
 */

void rev_string(char *s)
{
	int x;

	int size = strlen(s);

	for (x = size - 1; x >= 0; x--)
	{
		_putchar(*s);
		_putchar('\n');
		_putchar(s[x]);
	}
	_putchar('\n');
}
