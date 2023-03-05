#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: pointer variable
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, y;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (y = len / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	}
	else
	{
		for (y = (len - 1) / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
