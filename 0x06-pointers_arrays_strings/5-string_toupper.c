#include "main.h"

/**
 * *string_toupper - converts lowercase letters to uppercase letters
 *@x: input string
 *Return: char type
 */

char *string_toupper(char *x)
{
	int z = 0;

	while (x[z] != '\0')
	{
		if (x[z] >= 97 && x[z] <= 122)
		{
			x[z] -= 32;
		}

		z++;
	}

	return (x);
}
