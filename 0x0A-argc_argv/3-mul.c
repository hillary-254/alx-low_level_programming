#include "main.h"

/**
 * main - prints a multiplication of two numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: 1 if encounters error and 0 if it produces result
 */

int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
