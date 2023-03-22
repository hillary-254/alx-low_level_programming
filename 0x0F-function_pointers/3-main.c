#include "3-calc.h"

/**
 * main - does the calculation
 * @argc: size of the argument array
 * @argv: The argument array
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(argv[2]);

	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
