#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints number separater with a char
 *
 *@separator: character that separate integer list
 *
 * @n: number of parameters the user want to put
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printn;
	unsigned int i = 0;

	va_start(printn, n);

	for (; i + 1 < n; i++)
	{
		printf("%d", va_arg(printn, int));
		if (separator)
			printf("%s", separator);
	}
	if (i < n)
		printf("%d", va_arg(printn, int));

	printf("\n");

	va_end(printn);
}
