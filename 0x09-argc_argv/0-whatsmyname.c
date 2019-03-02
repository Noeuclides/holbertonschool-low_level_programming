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
	argc = 0;

	if (argc == 0)
	{
		printf("%s\n", argv[0]);
	}

	return (argc);

}
