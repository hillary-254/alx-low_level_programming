#include "main.h"

/**
 * *rot13 - encodes a string
 *@str: string to be encoded
 *Return: char type
 */

char *rot13(char *str)
{
	int len = 0;
	char x = str[len];

	while (x != '\0')
	{
		if ((x >= 'A' && x <= 'M') || (x >= 'a' && x <= 'm'))
		{
			x += 13;
		}
		else if ((x >= 'N' && x <= 'Z') || (x >= 'n' && x <= 'z'))
		{
			x -= 13;
		}

		len++;
	}

	return (str);
}
