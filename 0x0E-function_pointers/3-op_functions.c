#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - add function
 *
 *@a: first number to add
 *
 *@b: second number to add
 *
 *Return: sum when success
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substract function
 *
 *@a: first number to substract
 *
 *@b: second number to substract
 *
 *Return: integer when success
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - product function
 *
 *@a: first number of the mult function
 *
 *@b: second number to multiply
 *
 *Return: integer when success
 */


int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - substract function
 *
 *@a: divide
 *
 *@b: divisor
 *
 *Return: integer when success
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - substract function
 *
 *@a: divide
 *
 *@b: divisor
 *
 *Return: integer when success
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);

}
