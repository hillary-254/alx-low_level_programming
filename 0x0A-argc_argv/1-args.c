#include "main.h"

/**
 * main - prints the number of command line arguments passed
 *@argc: number of command line argument
 *@argv: argument vector
 *Return: 0
 */

int main(int argc, char *argv[0])
{
	(void) argv;
	printf("%d", argc - 1);
	return (0);
}
