#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string input
 * @accept: the bytes of strings
 * Return: matches one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
		int i;
		int j;
		char *c;

		i = 0;
		while (s[i] != '\0')
		{
			j = 0;
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					c = &s[i];
					return (c);
				}
				j++;
			}
			i++;

		}

	return (0);
}

