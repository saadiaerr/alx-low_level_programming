#include "main.h"
/**
  * _memset -  function that fills memory with a constant byte
  * @s: memory area
  * @b: constant byte
  * @n: number of bytes
  * Return: Returns a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; n > 0; y++)
	{
		s[y] = b;
		n--;
	}
	return (s);
}
