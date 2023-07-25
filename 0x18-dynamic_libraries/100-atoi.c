#include "main.h"
/**
  * _atoi - function that convert a string to an integer
  * @s: string to check
  * Return: string
  */
int _atoi(char *s)
{
	int sg = 1;
	unsigned int nm = 0;

	do {
		if (*s == '-')
			sg *= -1;
		else if (*s >= '0' && *s <= '9')
			nm = (nm * 10) + (*s - '0');
		else if (nm > 0)
			break;
	} while (*s++);

	return (nm * sg);
}
