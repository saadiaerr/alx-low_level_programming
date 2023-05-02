#include "main.h"
/**
  * _strcpy - function that copies the string pointed to by src
  * @dest: copy to
  * @src: source
  * Return: string
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
