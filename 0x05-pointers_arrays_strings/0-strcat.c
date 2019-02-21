#include "holberton.h"

/**
 *_strcat - concatenates two strings
 *
 *@dest: destine string
 *
 *@src: source string
 *
 *Return: return a character
 */

char *_strcat(char *dest, char *src)
{
	int i; /*lenght of the source string*/
	int j;/*lenght of the destination string*/

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}

	*(dest + i + j) = '\0';

	return (dest);
}
