#include <stdio.h>

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
	int i;

	for (i = 0; argv[i] != argv[argc]; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
