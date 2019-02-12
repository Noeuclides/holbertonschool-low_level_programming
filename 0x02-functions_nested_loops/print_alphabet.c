#include <unistd.h>

/**
 * Print_alphabet - writes the a to z c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	int n;

	for(n='a'; n <= 'z'; n++)
	{
	return (write(1, &c, 1));
	}
}
