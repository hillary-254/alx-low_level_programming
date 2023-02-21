#include "main.h"

/**
 * _abs - Prints absolute value of an integer
 * @v: the input checked
 * Return: 0
 */
int _abs(int v)
{
	if (v < 0)
	{
		return (-v);
	}
	else if (v > 0)
	{
		return (v);
	}
}
