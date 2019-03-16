#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct printed - struct printed
 *
 * @type: The operator
 * @prnt: The function associated
 */

typedef struct printed
{
	char *type;
	void (*prnt)(va_list);
} p_p;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
