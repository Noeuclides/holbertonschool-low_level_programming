#include "holberton.h"

/**
**_strcpy - print list of items on a array
*
*@a: array
*
*@n: number of elements of an array
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
			printf("%d\n", *(a + i));
	}
}
