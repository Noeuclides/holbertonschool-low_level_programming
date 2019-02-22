#include "holberton.h"

/**
 *string_toupper - change all lowercase to upper
 *
 * *: pointer array
 *
 *Return: return character succeed
 *
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] > 90 && s[i] != 10)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
