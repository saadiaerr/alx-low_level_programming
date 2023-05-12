#include <stdio.h>
#include <stdlib.h>
/**
  * main - program that adds positive numbers
  * @argv: array of argument
  * @argc: num of argument
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int somme = 0;
	char *cha;

	while (--argc)
	{
		for (cha = argv[argc]; *cha; cha++)
			if (*cha < '0' || *cha > '9')
				return (printf("Error\n"), 1);

		somme += atoi(argv[argc]);
	}
	printf("%d\n", somme);
	return (0);

}
