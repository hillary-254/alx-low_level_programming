#include "main.h"

/**
 * *leet - converts to leet speak
 *@str: input string
 *Return: char type
 */

char *leet(char *str)
{
	int x = 0, y = 0;
	char let[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};

	while (str[x] != '\0')
	{
		y = 0;

		while (y < 5 && let[y] != '\0')
		{
			if (str[x] == let[y] || str[x] + 32 == let[y])
			{
				str[x] = num[y];
			}
			y++;
		}

		x++;
	}
	return (str);
}
