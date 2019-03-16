#include "variadic_functions.h"
#include <stdarg.h>

/**
 *
 *
 *
 */
void printc()
{
	printf("%c,
}



/**
 * print_all -
 *
 * Return:
 */
void print_all(const char * const format, ...)
{
	int i;
	p_p compf[] = {
		{"c", printc},
		{"i", printn},
		{"f", printfloat},
		{"s", prints},
	};

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == p_p[i].tipo)
			p_p.prnt;
	}

}
