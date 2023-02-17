#include <stdio.h>

/**
 * main - Prints number
 * @void: main has no arguments
 * Description: Prints number we use putchar('0' + n)
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
