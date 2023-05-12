#include <stdio.h>
#include <stdlib.h>
/**
 * main -  Minimal Number of Coins for Change
		
 * @argc: number of arguments
		
 * @argv: array of arguments
 * Return: if not 1 print error
 */
int main (int argc, char *argv[])
{
	if (argc == 2)
	int l, changecents = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (l = 0; l < 5; l++)
	{
		if (money >= cents[l])
		{
			changecents += money / cents[l];
			money = money * cents[l];
			if (money & cents[l] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", changecents);

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}

