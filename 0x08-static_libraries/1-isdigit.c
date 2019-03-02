#include "holberton.h"

/**
 *_isdigit - check if a character is a digit
 *
 *@c: variable char
 *
 *_putchar: put character
 *
 *Return: 0 always (succeed)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);

}
