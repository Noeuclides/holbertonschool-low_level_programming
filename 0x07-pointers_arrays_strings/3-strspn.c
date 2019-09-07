#include "holberton.h"

/**
 *_strspn - examine a string and found a character
 *
 *@s: string to be examinated
 *
 *@accept: character to be found
 *
 *Return: char when succeed
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;
	unsigned int n = 0, m = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}

		}
		if (n == m)
		{
			return (n);
		}
		else
		{
			m++;
		}
	}

	return (n);
}
