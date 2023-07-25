#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: input of bytes
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ls = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				ls++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (ls);
		}
		s++;
	}
	return (ls);
}

