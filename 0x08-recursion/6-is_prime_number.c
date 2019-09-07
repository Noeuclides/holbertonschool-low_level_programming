#include "holberton.h"

/**
 *prime - check if it is prime number recursive function
 *
 *@n: number to evaluate if it is prime
 *
 *@div: number to div n to see if it's multiple
 *
 *@count: number to count how many times has been divisible n
 *
 *Return: 1 if n is prime 0 otherwise
 */
int prime(int n, int div, int count)
{
	div++;

	if (count >= 2)
		return (0);
	else if (n == div)
		return (1);
	if (n % div == 0)
		count++;
	return (prime(n, div, count));
}


/**
 *is_prime_number - check if it is prime number recursive function
 *
 *@n: number to evaluate if it is prime
 *
 *Return: 1 if n is prime 0 otherwise
 */
int is_prime_number(int n)
{
	int count = 1, div = 1;

	if (n == 1 || n == -1)
		return (0);

	return (prime(n, div, count));
}
