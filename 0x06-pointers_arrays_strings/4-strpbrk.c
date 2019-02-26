#include "holberton.h"

/**
 *_strpbrk - examine a string and found the first character
 *
 *@s: string to be examinated
 *
 *@accept: character to be found
 *
 *Return: char when succeed
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return ((s + i));
			}
		}
	}
	return (0);
}
