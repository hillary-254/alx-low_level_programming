#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted
 * Return: none
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	/*(n & 1) checks if the least significant bit of n is a 0 or a 1*/
	_putchar((n & 1) ? '1' : '0');
}
