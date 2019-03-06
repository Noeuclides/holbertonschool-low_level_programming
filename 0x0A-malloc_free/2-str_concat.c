#include "holberton.h"
#include <stdlib.h>

/**
 ***str_concat - create an array of char
 *
 *@s1: string parameter
 *
 *@s2: second string parameter
 *
 *Return: array of char
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, k, n, concat;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);


	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	concat = i + j;

	p = malloc(sizeof(char) * concat);

	if (!p)
		return (NULL);

	for (n = 0; n <= i; n++)
	{
		p[n] = s1[n];
	}
	for (n = i, k = 0; n <= concat && k <= j; n++, k++)
	{
		p[n] = s2[k];
	}

	return (p);
}
