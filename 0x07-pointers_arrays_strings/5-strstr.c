#include "main.h"

/**
 * *_strstr - finds the first occurrence of the substring needle in the string
 *@haystack: string to be compared
 *@needle: string of characters to be searched
 *Return: char type
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0, y = 0;

	while (haystack[x])
	{

		while (needle[y])
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
			y++;
		}

		if (needle[y] == '\0')
		{
			return (haystack + x);
		}
		x++;
	}
	return ('\0');
}
