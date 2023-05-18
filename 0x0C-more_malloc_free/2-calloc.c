#include "main.h"
/**
 * *_memset - fills memory
 * @s: pointer
 * @b: constant
 * @n: number of times to copy b
 * Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y = 0;

	for (; y < n; y++)
	{
		s[y] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array with malloc using
 * @nmemb: array lentgh
 * @size: size of element
 * Return: pointer memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(sizeof(int) * nmemb);

	if (str == 0)
		return (NULL);

	_memset(str, 0, sizeof(int) * nmemb);

	return (str);
}
