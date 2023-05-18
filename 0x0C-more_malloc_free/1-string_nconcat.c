#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string num 1
 * @s2: string num 2
 * @n: number of bytes
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int u = 0, y = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		st = malloc(sizeof(char) * (length1 + n + 1));
	else
		st = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!st)
		return (NULL);

	while (u < length1)
	{
		st[u] = s1[u];
		u++;
	}

	while (n < length2 && u < (length1 + n))
		st[u++] = s2[y++];

	while (n >= length2 && u < (length1 + length2))
		st[u++] = s2[y++];

	st[u] = '\0';

	return (st);
}
