#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: if c is found pointer to the first occurence if not pointer NULL
 */
char *_strchr(char *s, char c)
{
	int y = 0;

	for (; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
			return (s + y);
	}
	return (0);
}

