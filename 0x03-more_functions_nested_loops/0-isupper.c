#include "holberton.h"

/**
 *_isupper - check if a character is upper case
 *
 *@c: variable char
 *
 *_putchar: put character
 *
 *Return: 0 always (succeed)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
