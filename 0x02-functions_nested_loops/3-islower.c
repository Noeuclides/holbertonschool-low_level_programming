#include "holberton.h"

/**
 *_islower - 1 if is lowercase 0 else
 *
 *@c: lowcase or something else character
 *
 *Return: 1 or 0 (success)
 */

int _islower(int c)
{

	if (c <= 122 && c >= 97)
	{
		return (1);
	}

	return (0);


}
