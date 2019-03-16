#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print strings
 *
 *@separator: separator of the strings
 *
 *@n: number of parameters
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prints;
	unsigned int i;
	char *s;

	va_start(prints, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		s = va_arg(prints, char *);
		if (s == NULL)
			printf("(nil)");
		else if (i != (n - 1))
			printf("%s%s", s, separator);
		else
			printf("%s\n", s);
	}
}
