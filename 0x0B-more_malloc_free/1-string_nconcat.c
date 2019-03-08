#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
**string_nconcat - concatenate two strings
*
*@s1: first string
*
*@s2: second string
*
*@n: bytes allowed to the second string
*
*Return: the pointer
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k, m, concat;

	if (s1 == NULL)
		s1 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		concat = i + j + 1;
	else
		concat = i + n + 1;
	p = malloc(sizeof(char) * concat);
	if (!p)
		return (NULL);
	for (m = 0; m < i; m++)
		p[m] = s1[m];
	for (m = i, k = 0; m < concat - 1; m++, k++)
		p[m] = s2[k];
	p[concat - 1] = '\0';
	return (p);
}
