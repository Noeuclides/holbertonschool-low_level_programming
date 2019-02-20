#include "holberton.h"

/**
**_strcpy - print list of items on a array
*
*@dest: variable
*
*@src: string
*/

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}


	for (j = 0; j < i; j++)
	{
		*(dest + j) = *(src + j);
	}

	return(dest);
}
