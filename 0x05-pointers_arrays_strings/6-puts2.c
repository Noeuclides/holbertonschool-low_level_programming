#include "holberton.h"

/**
*puts2 - print string backward
*
*@str: a string variable
*
*/

void puts2(char *str)
{
	int i;
	int len;

	while ((*(str + len) != '\0'))
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
