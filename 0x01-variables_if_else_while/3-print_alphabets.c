#include <stdio.h>

/**
 * main - Prints Alphabet
 * @void:Empty arguments list
 * Description: Prints alphabet in lowercase then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha_letter = 'a';

	while (alpha_letter <= 'z')
	{
		putchar(alpha_letter);
		alpha_letter++;
	}
	alpha_letter = 'A';

	while (alpha_letter <= 'Z')
	{
		putchar(alpha_letter);
		alpha_letter++;
	}
	putchar('\n');
	return (0);
}
