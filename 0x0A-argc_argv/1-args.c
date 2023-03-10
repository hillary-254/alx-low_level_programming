#include "main.h"

/**
 * main - prints the number of command line arguments passed
 *@argc: number of command line argument
 *@argv: argument vector
 *Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
