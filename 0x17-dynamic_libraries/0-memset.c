#include "holberton.h"

/**
 **_memset - replace the first characters of an array by a set char n times
 *
 *@s: character array
 *
 *@b: character which its going to replace the first chars of the main array
 *
 *@n: number of times in which our char variable its going to be put
 *
 *Return: char when succeed
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
