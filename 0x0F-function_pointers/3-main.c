#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - check the result of simple operations.
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if (!get_op_func(op) || op[1] != '\0')
	{
		printf("Error\n"), exit(99);
	}

	if ((*op == '/' && b == 0) ||
	    (*op == '%' && b == 0))
	{
		printf("Error\n"), exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
