#include "holberton.h"
#include <stdlib.h>

/**
 ***_strdup - create an array of char
 *
 *@str: string parameter
 *
 *Return: array of char
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	p = malloc(sizeof(char) * i);

	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}

	if (!p)
		return (NULL);

	return (p);
}
