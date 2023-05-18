#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array with malloc using
 * @nmemb: array lentgh
 * @size: size of element
 * Return: pointer memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int y = 0, t = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = nmemb * size;
	str = malloc(t);

	if (str == 0)
		return (NULL);

	for (; y < t; y++)
		str[y] = 0;

	return (str);
}
