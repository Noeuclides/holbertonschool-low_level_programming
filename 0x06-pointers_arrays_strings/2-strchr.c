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
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			n = i;
		}
		if (n != 0)
			s[i + 1] = '\0';
	}

	if (n == 0)
	{
		return ('00');
	}
	else
	{
		for (i = n; s[i] != '\0'; i++)
		{
		}
	}
	return (s);

}
