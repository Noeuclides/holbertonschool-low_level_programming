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
	int i = 0;
	int comp;

	if (s1[i] - s2[i] != 0)
	{
		comp = s1[i] - s2[i];
	}
	else
		comp = 0;

	return (comp);
}
