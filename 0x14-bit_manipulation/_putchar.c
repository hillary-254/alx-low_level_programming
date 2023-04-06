#include <unistd.h>

/**
 * _putchar - alternative of inbuilt putchar
 * @c: the character inputed
 * Return: integer
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
