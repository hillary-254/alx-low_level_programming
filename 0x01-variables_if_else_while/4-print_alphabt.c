#include <stdio.h>

/**
 * main - Prints alphabet
 * @void: main has no arguments list
 * Description: Prints lowercase alphabet and skips q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
