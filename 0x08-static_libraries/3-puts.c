#include "holberton.h"

/**
*_puts - print string
*
*@str: a character variable
*
*/

void _puts(char *str)
{
	int i;
	int len;

	len = 0;

	for (i = -1; i < len; i++)
	{
		if ((str[len] == '\0'))
		{
			len = i;
		}
		else
		{
			_putchar(str[len]);
			len++;
		}

	}

	_putchar('\n');

}
