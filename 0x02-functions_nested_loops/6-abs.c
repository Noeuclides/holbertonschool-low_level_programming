#include "holberton.h"

/**
 *_abs - print absolute value
 *
 *@n: variable
 *
 *Return: 1, 0 or -1 (success)
 */

int _abs(int n)
{

	if (n < 0)
	{
		n = -1 * n;
		return (n);
	}
	return (n);

}
