#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*
*@argc: count of strings
*
*@argv: array of pointers
*
*Return: 0 when succeed
**/

int main(int argc, char *argv[])
{
	int i, j, n, sum;

	sum = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 1)
			{
				n = atoi(argv[i][j]);
				sum += n;
			}
			else if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				return (0);
			}
		}
	}

	printf("%d\n", sum);
	return (0);

}
