#include "main.h"
/**
  * char *_strcpy - function copies the string pointed to by src
  * @dest:  buffer
  * @src: string pointed
  * return: string
  */
char *_strcpy(char *dest, char *src)
{
	int ds = 0;

	while (*(src + ds) != '\0')
	{
		*(dest + ds) = *(src + ds);
		ds++;
	}

	*(dest + ds) = '\0';
	return (dest);
}
