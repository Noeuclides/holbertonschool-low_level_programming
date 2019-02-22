#include "holberton.h"

/**
 *_strncpy - concatenates two strings
 *
 *@dest: destination string
 *
 *@src: source string
 *
 *@n: limit of the destination string
 *
 *Return: return a character
 */

char *_strncpy(char *dest, char *src, int n)
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
