#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: lentgh
 */
int _strlen_recursion(char *s)
{
	int lon = 0;

	if (*s != '\0')
	{
		lon += _strlen_recursion(s + 1) + 1;
	}

	return (lon);
}

