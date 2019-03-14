#include <stdio>

/**
 *main - function of opcode
 *
 *@argc: number of arguments
 *
 *@argv: array
 *
 *Return: 0 when succeed
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);

}
