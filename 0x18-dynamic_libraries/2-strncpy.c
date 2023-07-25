#include "main.h"
/**
  * _strncpy -  function that copies a string
  * @dest: copy to
  * @src: source
  * @n: input to check
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int sr;

	for (sr = 0; sr < n && src[sr] != '\0'; sr++)
		dest[sr] = src[sr];

	while (sr < n)
	{
		dest[sr] = '\0';
		sr++;
	}
	return (dest);
}
