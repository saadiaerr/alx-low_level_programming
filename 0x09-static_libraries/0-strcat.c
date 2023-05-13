#include "main.h"

/**
 * _strcat - joj ta3  string
 * @dest:input
 * @src:input
 * Return:s
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
