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
	int n = 0;
	char f13[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char s13[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; f13[j] != '\0' && n == 0; j++)
		{
			if (s[i] == f13[j])
			{
				s[i] = s13[j];
				n = 1;
			}
		}
		n = 0;
	}

	return (s);
}
