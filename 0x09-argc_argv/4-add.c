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
	int i, n, sum;

	for (i = 0; argv[i] != argv[argc]; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			n = atoi(argv[i]);
			sum += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);

}
