#include <stdio.h>
#include "main.h"
/**
 * main - program that multiplies two numbers
 * @argv: array of argument
 * @argc: num of array
 * @_atoi: converts a string to an integer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = _atoi(argv[1] * _atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
