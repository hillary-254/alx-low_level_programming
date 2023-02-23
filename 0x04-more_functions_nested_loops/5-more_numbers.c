#include "main.h"

/**
 * more_numbers - prints number 0-14 10 times
 * @void: Has no argument list
 * Return: void
 */
void more_numbers(void)
{
	int x, num;

	for (x = 0; x < 10; x++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
