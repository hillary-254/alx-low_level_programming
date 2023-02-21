#include "main.h"

/**
 * times_table - prints a time table
 * Return: void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			if (a == 0 && b == 0)
			{
				_putchar(48);
			}
			else if (a == 0)
			{
				_putchar((b - 1) + '0');
			}
			else if (b == 0)
			{
				_putchar((a - 1) + '0');
			}
			else
			{
				_putchar(((a - 1) * (b - 1)) + '0');
			}
		}
		_putchar('\n');
	}
}
