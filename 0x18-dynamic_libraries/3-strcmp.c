#include "main.h"
/**
  * _strcmp - function that compares two strings
  * @s1: string number1
  * @s2: string number2
  * Return: 0 if false, 1 if true
  */
int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (*s1 != *s2)
		{
			j = ((int)*s1 - 0) - ((int)*s2 - 0);
			break;
		}
		s1++;
		s2++;
	}
	return (j);
}
