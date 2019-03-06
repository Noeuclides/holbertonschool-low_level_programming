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
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	concat = i + j;
	p = malloc(sizeof(char) * (concat + 1));
	if (!p)
		return (NULL);

	if (s1 == NULL && s2 == NULL)
		return ('\0');
	for (n = 0; n <= i; n++)
	{
		if (s1 != NULL)
			p[n] = s1[n];
		else
			p[0] = '\0';
	}
	for (n = i, k = 0; n <= concat && k <= j; n++, k++)
	{
		if (s2 != NULL)
			p[n] = s2[k];
		else
			p[n + 1] = '\0';
	}
	return (p);
}
