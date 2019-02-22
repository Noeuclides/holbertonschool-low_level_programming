#include "holberton.h"

/**
 *_strcmp - concatenates two strings
 *
 *@s1: destination string
 *
 *@s2: source string
 *
 *Return: return a character
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int comp;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (i > j)
		comp = 15;
	else if (i < j)
		comp = -15;
	else
		comp = 0;

	return (comp);
}
