#include "main.h"

/**
 * puts2 - prints every char of a string
 * @str: pointer variable
 * Return: 0
 */

void puts2(char *str)
{
	int a = 0, b;

	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
