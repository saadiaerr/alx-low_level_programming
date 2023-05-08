#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: array
 * @size: size of array
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sm1 = 0;
	int sm2 = 0;
	int i;

	i = 0;
	for (; i < size; i++)
	{
		sm1 = sm1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sm2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sm1, sm2);
}

