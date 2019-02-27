#include "holberton.h"

/**
 *_pow_recursion - power function recursive
 *
 *@x: base number
 *
 *@y: power number
 *
 *Return: result integer, -1 if is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
