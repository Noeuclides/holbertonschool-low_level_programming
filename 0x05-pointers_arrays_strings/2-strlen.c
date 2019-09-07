#include "holberton.h"

/**
*_strlen - return the lenght of an array
*
*@s: a character variable
*
*Return: return integer lenght of the array
*/

int _strlen(char *s)
{
	int i;
	int len;

	len = 0;

	for (i = -1; i < len; i++)
	{
		if ((s[len] == '\0'))
		{
			len = i;
		}
		else
		{
			len++;
		}
	}

	return (i);
}
