#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function  returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *c;
	int int1 = 0, int2 = 0;

	if (str == NULL)
		return (NULL);

	for (; str[int1] != '\0'; int1++)
		;

	c = malloc(sizeof(char) * (int1 + 1));

	if (c == 0)
		return (NULL);

	for (; str[int2]; int2++)
		c[int2] = str[int2];

	return (c);
}
