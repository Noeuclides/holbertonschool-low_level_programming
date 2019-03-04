#include <stdio.h>
#include "holberton.h"

/**
*main - entry point
*
*@argc: count of strings
*
*@argv: array of pointers
*
*_add: function that validade that we have and entire int number
*
*Return: 0 when succeed
**/

int main(int argc, char *argv[])
{
	int cents[5] = {25, 10, 5, 2, 1};
	int n, i, count = 0;

	if (argc == 2)
	{
		n = _add(2, argv);
		if (n < 0)
			printf("0\n");
		else if (n == 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			for (i = 0; i <= 4; i++)
			{
				if (n - cents[i] == 0)
				{
					count++;
					printf("%d\n", count);
					return (0);
				}
				else if (n - cents[i] > 0)
				{
					count++;
					n = n - cents[i];
					i--;
				}
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
