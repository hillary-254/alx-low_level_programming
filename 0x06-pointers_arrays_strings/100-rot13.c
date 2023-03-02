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
		while ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
		{
			if ((x > 'M' && x <= 'Z') || (x > 'm' && x <= 'z'))
			{
				x -= 13;
				break;
			}
			
			x += 13;
			break;
		}

		len++;
	}

	return (str);
}
