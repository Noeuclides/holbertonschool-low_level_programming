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
	int n, m;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", n * m);
	}
	else
	{
		printf("Error\n");
		return (-1);
	}

	return (0);

}
