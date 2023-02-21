#include <stdio.h>

/**
 * main - prints fibonnaci
 * Return: 0
 */
int main(void)
{
	int a;
	long b = 1, c = 2;

	for (a = 0; a < 50; ++a)
	{
		if (a == 0)
		{
			printf("%ld", b);
		}
		else if (a == 1)
		{
			printf(", %ld", c);
		}
		else
		{
			c += b;
			b = c - b;
			printf(", %ld", c);
		}
	}
	printf("\n");
	return (0);
}
