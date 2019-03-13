#include "function_pointers.h"

/**
 * array_iterator - function that calls pointer function with an array
 *
 *@array: array
 *
 *@size: size of the array
 *
 *@action: function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
