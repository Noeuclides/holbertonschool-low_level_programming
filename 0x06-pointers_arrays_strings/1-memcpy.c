#include "holberton.h"

/**
 **_memcpy - replace the first characters of an array by a set char n times
 *
 *@dest: destination array where the content is to be copied
 *
 *@src: source of the data to be copied
 *
 *@n: number of bytes to be copied
 *
 *Return: char when succeed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
