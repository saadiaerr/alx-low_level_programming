#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concat of s1 and s2 or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int int1, int2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	int1 = int2 = 0;

	while (s1[int1] != '\0')
		int1++;

	while (s2[int2] != '\0')
		int2++;

	c = malloc(sizeof(char) * (int1 + int2 + 1));
	if (c == NULL)
		return (NULL);
	int1 = int2 = 0;

	while (s1[int1] != '\0')
	{
		c[int1] = s1[int1];
		int1++;
	}
	while (s2[int2] != '\0')
	{
		c[int1] = s2[int2];
		int1++, int2++;
	}
	c[int1] = '\0';
	return (c);
}
