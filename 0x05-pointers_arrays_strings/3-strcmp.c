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

	while (s1[i] - s2[i] != 0)
	{
		if (s1[i] - s2[i] < 0)
		{
			comp = s2[i] - s1[i];
		}
		else if (s1[i] - s2[i] > 0)
		{
			comp = -1 * (s2[i] - s1[i]);
		}
		i++;
	}
	comp = 0;
	
	return (comp);
}
