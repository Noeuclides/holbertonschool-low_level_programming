#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function that sums all parameters
 *
 *@n: constant number that gives the number of parameters to pass
 *
 * Return: sum of all the parameters, 0 when there is not parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list listtosum;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(listtosum, n);

	for (i = 0; i < n; i++)
		sum += (va_arg(listtosum, int));

	va_end(listtosum);
	return (sum);
}
