#include "holberton.h"

/**
 **_strchr - examine a string and found a character
 *
 *@s: string to be examinated
 *
 *@c: character to be found
 *
 *Return: char when succeed
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c)
	{
		if (s[i] != '\0')
		{
			return (0);
		}
		i++;
	}
	return (&s[i]);
}
