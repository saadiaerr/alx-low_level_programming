#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function  return a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: width or height <= 0 return NULL
 */
int **alloc_grid(int width, int height)
{
	int **c;
	int m = 0, n = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(sizeof(int *) * height);

	if (c == NULL)
		return (NULL);

	for (; m < height; m++)
	{
		c[m] = malloc(sizeof(int) * width);

		if (c[m] == NULL)
		{
			for (; m >= 0; m--)
				free(c[m]);

			free(c);
			return (NULL);
		}
	}

	for (; m < height; m++)
	{
		for (; n < width; n++)
			c[m][n] = 0;
	}

	return (c);
}

