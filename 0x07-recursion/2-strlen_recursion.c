#include "holberton.h"

/**
 *_strlen_recursion - put recursevely a char but in reverse
 *
 *@s: string input to be reversed
 *
 *_putchar: put chararacter
 *
 *Return: 0 finish, 1 keeps recursion
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		n = _strlen_recursion((s + 1));
		n++;
		return (n);
	}
	else
	{
		return (0);
	}
}
