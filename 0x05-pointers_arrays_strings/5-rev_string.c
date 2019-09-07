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
	int j;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	j = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		aux = s[j];
		s[j] = s[i];
		s[i] = aux;
		j--;

	}

}
