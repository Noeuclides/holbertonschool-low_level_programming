#include "function_pointers.h"

/**
 * print_name - print a name
 *
 *@name: name that is going to be printed
 *
 *@f: function that prints
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);

}
