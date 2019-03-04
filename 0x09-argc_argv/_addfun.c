#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - entry point
*
*@argc: count of strings
*
*@argv: array of pointers
*
*Return: 0 when succeed
**/

int _add(int argc, char *argv[])
{
	int i, j, n, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[i]);
		sum += n;
	}
	return (sum);
}
