#include <unistd.h>

/**
 * funaux - writes the character c to stdout
 *
 * @m: The character to print
 *
 * @n: main int
 * Return: On success 1.
 */
int funaux(int m, int n)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m < n)
	{
		m++;
		funaux(m, n);
		return (m - 1);
	}
	else
		return (1);
}
