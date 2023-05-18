#include "main.h"
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: number to allocate
 * Return: a pointer to the the memory or NULL.
 */
void *malloc_checked(unsigned int b)
{
	char *lloc = malloc(b);

	if (lloc == 0)
		exit(98);

	return (lloc);
}
