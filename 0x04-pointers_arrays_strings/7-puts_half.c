#include "holberton.h"

/**
*puts_half - print string backward
*
*@str: a string variable
*
*/

void puts_half(char *str)
{
	int i;
	int len;
	int n;

	len = 0;

	while ((*(str + len) != '\0'))
	{
		len++;
	}

	n = len / 2;

	if (n % 2  == 0)
	{
		for (i = n + 1; i <= len ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n + 1; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
