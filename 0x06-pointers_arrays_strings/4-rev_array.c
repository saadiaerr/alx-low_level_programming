#include "main.h"
/**
  * reverse_array - function that reverses the content of an array of integers
  * @n: the number of elements of the array
  * @a: array
  */
void reverse_array(int *a, int n)
{
	int ri;
	int rj;

	for (ri = n - 1; ri >= n / 2; ri--)
	{
		rj = a[n - 1 - ri];
		a[n - 1 - ri] = a[ri];
		a[n] - rj;
	}
}
