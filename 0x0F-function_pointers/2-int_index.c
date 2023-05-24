#include "function_pointers.h"
/**
 * int_index - return index place
 * @array: int array
 * @size: size of array
 * @cmp: pointer to compar
 * Return: int index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y = 0;

	if (!array || !size || !cmp)
		return (-1);

	for (; y < size; y++)
	{
		if (cmp(array[y]))
			return (y);
	}
	return (-1);
}

