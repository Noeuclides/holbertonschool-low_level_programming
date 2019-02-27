#include "holberton.h"

/**
 **rot13 - change all lowercase to upper
 *
 *@s: pointer array
 *
 *Return: return character succeed
 *
 */

char *rot13(char *s)
{
	int i;
	int j;
	char f13[] = "ABCDEFGHIJKLMabcdefghijklm";
	char s13[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 26; j++)
			     if ((s[i] == f13[j] + 13 || s[i] == s13[j] - 13))
				     s[i] = f13[j];
	}

	return (s);
}
