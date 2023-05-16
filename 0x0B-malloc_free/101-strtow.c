#include <stdlib.h>
#include "main.h"
/**
 * cnt_word -  count the number of words in a string
 * @s: string to cnt
 * Return: int number of words
 */
int cnt_word(char *s)
{
	int y = 0;
	int m = 0;

	for (; s[y]; y++)
	{
		if (s[y] == ' ')
		{
			if (s[y + 1] != ' ' && s[y + 1] != '\0')
				m++;
		}
		else if (y == 0)
		{
			m++;
		}
	}
	m++;
	return (m);
}
/**
 * **strtow -  function that splits a string into words
 * @str: string
 * Return: NULL if str == NULL or str == "".
 */
char **strtow(char *str)
{
	char **c;
	int y, z, s, t, m = 0, w = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	m = cnt_word(str);
	if (m == 1)
		return (NULL);

	c = (char **) malloc(m * sizeof(char *));
	if (c == NULL)
		return (NULL);
	c[m - 1] = NULL;
	y = 0;
	while (str[y])
	{
		if (str[y] != ' ' && (y = 0 || str[y - 1] == ' '))
		{
			for (z = 1; str[y + z] != ' ' && str[y + z]; z++)
			z++;
			c[w] = (char *)malloc(z * sizeof(char));
			z--;

			if (c[w] == NULL)
			{
				for (s = 0; s < w; s++)
					free(c[s]);
				free(c[m - 1]);
				free(c);
				return (NULL);
			}
			for (t = 0; t < z; t++)
				c[w][t] = str[y + t];

			c[w][t] = '\0';
			w++;
			y += z;
		}
		else
			y++;
	}
	return (c);
}
