#include "holberton.h"

/**
 *_isalpha - 1 if is lowercase and upper 0 else
 *
 *@c: lowcase or something else character
 *
 *Return: 1 or 0 (success)
 */

int _isalpha(int c)
{

	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else if (c <= 90 && c >= 65)
	{
		return (1);
	}

	return (0);


}
