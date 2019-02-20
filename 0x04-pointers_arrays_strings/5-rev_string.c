#include "holberton.h"

/**
*rev_string - print string backwards
*
*@s: a string variable
*
*/

void rev_string(char *s)
{
	int i;
	int len;
	char aux;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}


	for (i = 0; i <= len / 2; i++)
	{
		aux = s[len - 1];
		s[len - 1] = s[i];
		s[i] = aux;
		len--;

	}
}
