#include "main.h"
/**
  * rot13 - function that encodes a string using rot13
  * @s: pointer to string
  * Return: string
  */
char *rot13(char *s)
{
	int j;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*s ==  ROT13[j])
			{
				*s = ROT13[j];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
