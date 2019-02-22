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
	int i; /*lenght of the source string*/
	int j;/*lenght of the destination string*/

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
		{
			dest[j] = '\0';
			src[j + 1] = '\0';
		}
		else
		{
			*(dest + j) = *(src + j);
		}
	}

	return (dest);
}
