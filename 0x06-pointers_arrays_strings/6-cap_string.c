#include "main.h"

/**
 * *cap_string - capitalize the first letter of each word
 *@str: string to be capitalized
 *Return: char type
 */

char *cap_string(char *str)
{
	int cap, x = 0;

	while (str[x] != '\0')
	{
		if (isspace(str[x]) || ispunct(str[x]))
		{
			cap = 1;
		}
		else if (cap)
		{
			str[x] = toupper(str[x]);
			cap = 0;
		}
		x++;
	}

	return (str);
}
