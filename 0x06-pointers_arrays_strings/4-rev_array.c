#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int ri;
	int rj;

	for (ri = 0; ri < n--; ri++)
	{
		rj = a[ri];
		a[ri] = a[n];
		a[n] = rj;
	}
}
