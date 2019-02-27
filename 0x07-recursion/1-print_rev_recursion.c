#include "holberton.h"

/**
 *_print_rev_recursion - put recursevely a char but in reverse
 *
 *@s: string input to be reversed
 *
 *_putchar: put chararacter
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
		_putchar(*s);
	else
	{
		_putchar(_print_rev_recursion((s + 1)));
	}
}
