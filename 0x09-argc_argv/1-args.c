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
	(void)*argv;

	printf("%d\n", argc);

	return (argc);

}
