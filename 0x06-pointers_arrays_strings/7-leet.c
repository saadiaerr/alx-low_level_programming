#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int ri, rj;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (ri = 0; n[ri] != '\0'; ri++)
	{
		for (rj = 0; rj < 10; rj++)
		{
			if (n[ri] == c1[rj])
			{
				n[ri] = c2[rj];
			}
		}
	}
	return (n);
}
