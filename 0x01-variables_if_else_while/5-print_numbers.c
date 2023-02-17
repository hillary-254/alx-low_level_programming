#include <stdio.h>

/**
 * main - Prints numbers
 * @void: main has no arguments
 * Description: Prints number between 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d\n", number);
	}
	return (0);

