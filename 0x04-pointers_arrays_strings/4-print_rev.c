#include "holberton.h"

/**
*print_rev - print string backwards
*
*@s: a character variable
*
*/

void print_rev(char *s)
{
	int i;
	int len;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
