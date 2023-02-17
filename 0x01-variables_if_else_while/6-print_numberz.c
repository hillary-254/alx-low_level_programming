#include <stdio.h>

/**
 * main - Prints number
 * @void: main has no arguments
 * Description: Prints number using putchar(putchar outputs char but to print integer, we use putchar('0' + n) where n is integer to be converted. putchar will inteprete '0' to ASCII code then add the number to get integer equivalent
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
