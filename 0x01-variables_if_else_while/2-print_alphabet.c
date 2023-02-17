#include <stdio.h>

/**
 * main - prints Alphabet in lowercase
 * @void: Main has no arguments
 * Description: Prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
