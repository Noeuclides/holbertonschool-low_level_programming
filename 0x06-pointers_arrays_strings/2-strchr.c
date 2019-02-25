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
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s[i] = s[i];
		}
	}

	return (s);

}
