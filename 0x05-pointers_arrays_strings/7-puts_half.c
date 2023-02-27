#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: pointer variable
 * Return: void
 */

void puts_half(char *str)
{
	int len, index = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
	{
		index = (len - 1) / 2;
		index += 1;
	}
	else
	{
		index = len / 2;
	}
	for (; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
