#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @num: input checked
 * Return:0
 */
int print_last_digit(int num)
{
	int lnum;

	lnum = num % 10;
	if (lnum >= 0)
	{
		_putchar(lnum + '0');
		return (lnum);
	}
	return (0);
}
