#include <stdio.h>

/**
 * main - Print hexadecimal
 * @void: Main has no arguments
 * Description: prints hexadecimal
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar('0' + num);
		}
		else
		{
			putchar('a' + (num - 10));
		}
	}
	putchar('\n');
	return (0);
}
