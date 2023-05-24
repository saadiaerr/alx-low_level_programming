#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that prints each array elem on a newl
 * @array: int array
 * @size: size of array
 * @action: function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y = 0;

	if (!array || !action)
		return;

	for (; y < size; y++)
	{
		action(array[y]);
	}
}
