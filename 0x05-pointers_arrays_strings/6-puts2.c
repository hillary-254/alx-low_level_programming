#include "main.h"

/**
 * puts2 - prints every char of a string
 * @str: pointer variable
 * Return: 0
 */

void puts2(char *str)
{
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
