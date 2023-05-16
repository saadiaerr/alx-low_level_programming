#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: the size of an aray
 * @c: charactere
 * Return: pointer to array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int f;

	n = malloc(sizeof(char) * size);

	if (size == 0 || n == 0)
		return (0);

	for (f = 0; f < size; f++)
		n[f] = c;

	return (n);
}

