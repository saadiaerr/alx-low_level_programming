#include "main.h"
/**
  * _memcpy - function that copies memory area
  * @n: function copies
  * @src: source memory
  * @dest: copy in
  * @n: number of bytes
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y = 0;

	for (y < n; y++)
	{
		src[y] = dest[y];
	}
	return (dest);

}
