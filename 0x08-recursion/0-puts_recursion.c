#include "holberton.h"

/**
 *_puts_recursion - put recursevely a char
 *
 *@s: string input
 *
 *_putchar: put character
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}
}
