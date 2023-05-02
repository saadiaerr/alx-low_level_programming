#include "main.h"
/**
  * rev_string - function that reverses a string
  * @s: string to prints
  */
void rev_string(char *s)
{
	int n = 0;
	char ptr = s[0];
	int m;

	while (s[n] != '\0')
		n++;

	for (m = 0; m < n; m++)
	{
		n--;
		ptr = s[m];
		s[m] = s[n];
		s[n] = ptr;
	}
}
