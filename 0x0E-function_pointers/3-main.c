#include "function_pointers.h"

/**
 * main - calculate an operation
 *
 *@argc: number of arguments
 *
 *@argv: array of string
 *
 * Return: 0 when succeed
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = get_op_func(argv[2])(num1, num2);
	printf("%d\n", calc);
	return (0);
}
