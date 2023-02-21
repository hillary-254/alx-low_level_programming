#include "main.h"

/**
 * jack_bauer - Displays time
 * Returns: void
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hour + '0');
			_putchar(58);
			_putchar(min + '0');
			_putchar('\n');
		}
	}
}
