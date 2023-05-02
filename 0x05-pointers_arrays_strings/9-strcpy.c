#include "main.h"
/**
  * _strcpy - function that copies the string pointed to by src
  * @dest:  buffer
  * @src: string pointed
  * return: string
  */
char *_strcpy(char *dest, char *src)
{
	int ds = -1;

	do {
		ds++;
		dest[ds] = src[ds];
	} while (src[ds] != '\0');

	return (dest);
}
