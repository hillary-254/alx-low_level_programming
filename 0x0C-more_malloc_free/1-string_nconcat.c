#include "main.h"

/**
 * *string_nconcat - concatenates two strings followed by first n bytes of s2
 *@s1: string 1
 *@s2: string 2
 *@n: the length to be added to s1 if the length of s2 is greater than n
 *Return: char type
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, len = 0, c1 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	if (n >= l2)
		len = l1 + l2;
	else
		len = l1 + n;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	l2 = 0;
	while (c1 < len)
	{
		if (c1 <= l1)
			str[c1] = s1[c1];
		if (c1 >= l1)
		{
			str[c1] = s2[l2];
			l2++;
		}
		c1++;
	}
	str[c1] = '\0';
	return (str);
}
