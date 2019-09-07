#include "holberton.h"

/**
 *swap_int - reset the variable to 98
 *
 *@a: a integer variable
 *
 *@b: other integer variable
 *
 *_putchar: put a character
 *
 */

void swap_int(int *a, int *b)
{
	int a2;

	a2 = *a;
	*a = *b;
	*b = a2;

}
