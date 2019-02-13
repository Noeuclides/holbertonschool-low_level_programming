#include "holberton.h"

/**
 *jack_bauer - time format
 *
 *Return: m (success)
 */

void jack_bauer(void)
{
	int n1;
	int n2;
	int n3;
	int n4;

	for (n1 = 0; n1 < 2; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{

			for (n3 = 0; n3 < 6; n3++)
			{
				for (n4 = 0; n4 <= 9; n4++)
				{
					_putchar(n1 + '0');
					_putchar(n2 + '0');
					_putchar(':');
					_putchar(n3 + '0');
					_putchar(n4 + '0');
					_putchar('\n');
				}
			}
		}
	}
	n1 = 2;
	for (n2 = 0; n2 <= 3; n2++)
	{
		for (n3 = 0; n3 < 6; n3++)
		{
			for (n4 = 0; n4 <= 9; n4++)
			{
				_putchar(n1 + '0');
				_putchar(n2 + '0');
				_putchar(':');
				_putchar(n3 + '0');
				_putchar(n4 + '0');
				_putchar('\n');
			}
		}
	}
}
