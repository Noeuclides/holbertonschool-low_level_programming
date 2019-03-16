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
	unsigned int i;

	va_start(printn, n);

	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
				printf("%d%s", va_arg(printn, int), separator);
			else
				printf("%d\n", va_arg(printn, int));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
				printf("%d", va_arg(printn, int));
			else
				printf("%d\n", va_arg(printn, int));
		}
	}
	va_end(printn);
}
