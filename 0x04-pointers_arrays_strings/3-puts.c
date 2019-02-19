#include "holberton.h"

/**
*_puts - print string
*
*@str: a character variable
*
*Return: return integer lenght of the array
*/

void _puts(char *str)
{
	int i;
	int len;

	len = 0;

	for (i = -1; i < len; i++)
	{
		_putchar(str[len]);

		if ((str[len] == '\0'))
		{
			len = i;
		}
		else
		{
			len++;
		}
	}
	_putchar(10);
}
