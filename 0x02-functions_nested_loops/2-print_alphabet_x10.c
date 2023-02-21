#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: does not have a return value
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	while (i <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');

		i++;
	}
}
