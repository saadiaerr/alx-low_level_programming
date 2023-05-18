#include "main.h"
/**
 * *array_range - function that creates an array of integers
 * @min: minimum range int
 * @max: maximum range int
 * Return: new array
 */
int *array_range(int min, int max)
{
	int *str;
	int y, lentgh;

	if (min > max)
		return (NULL);

	lentgh = max - min + 1;

	str = malloc(sizeof(int) * lentgh);

	if (str == 0)
		return (NULL);

	for (y = 0; y < lentgh; y++)
		str[y] = min++;

	return (str);
}
