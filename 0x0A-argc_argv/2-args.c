#include "main.h"

/**
 * main - prints all the command line arguments passed
 *@argc: argument count
 *@argv: argument array
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
