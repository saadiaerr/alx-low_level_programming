#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function  concatenates all the arguments of the program
 * @ac: int
 * @av: arg
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int y = 0, m = 0, s = 0, len = 0;
	char *tr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; y < ac; y++)
	{
		for (m = 0; av[y][m]; m++)
			len++;
	}
	len += ac;

	tr = malloc(sizeof(char) * len + 1);
	if (tr == NULL)
		return (NULL);
	for (y = 0; y < ac; y++)
	{
	for (m = 0; av[y][m]; m++)
	{
		tr[s] = av[y][m];
		s++;
	}
	if (tr[s] == '\0')
	{
		tr[s++] = '\n';
	}
	}
	return (tr);
}
