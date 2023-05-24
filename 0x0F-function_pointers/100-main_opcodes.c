#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -function that prints its own opcodes
 * @argc: number of arg
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned char *a = (char *)main;
	int by = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (by--)
		printf("%02hhx%s", *a++, by ? " " : "\n");
	return (0);
}
