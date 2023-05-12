#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: number of arguments to check
 * @argv: array of arguments to check
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m = 0;

	for (; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
