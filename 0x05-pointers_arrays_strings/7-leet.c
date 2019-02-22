#include "holberton.h"

/**
 *leet - change all lowercase to upper
 *
 *@s: pointer array
 *
 *Return: return character succeed
 *
 */

char *leet(char *s)
{
	int i;
	int j;
	char upper[] = "A, E, O, T, L";
	char low[] = "a, e, o, t, l";
	char leet[] = "4, 3, 0, 7, 1";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == upper[j] || s[i] == low[j])
				s[i] = leet[j];
		}
	}
	return (s);
}
