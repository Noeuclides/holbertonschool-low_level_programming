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
	unsigned int i = 0;
	char *s;

	va_start(prints, n);

	for (; i + 1 < n; i++)
	{
		s = va_arg(prints, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator)
			printf("%s", separator);
	}
	if (i < n && s)
		printf("%s", va_arg(prints, char *));
	else if (!s)
		printf("(nil)");

	printf("\n");

	va_end(prints);
}
