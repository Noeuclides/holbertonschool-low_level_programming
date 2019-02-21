#include "holberton.h"

/**
 *_strncat - concatenates two strings
 *
 *@dest: destination string
 *
 *@src: source string
 *
 *@n: limit of the destination string
 *
 *Return: return a character
 */

char *_strncat(char *dest, char *src, int n)
{
	int i; /*lenght of the source string*/
	int j;/*lenght of the destination string*/

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		*(dest + i + j) = *(src + j);
	}
	*(dest + i + j) = '\0';

	return (dest);
}
