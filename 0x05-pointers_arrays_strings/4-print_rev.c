#include "main.h"
/**
  * print_rev - function that prints a string, in reverse
  * @s: string to print
  */
void print_rev(char *s)
{
	int m = 0;
	int p;

	while (*s != '\0')
	{
		m++;
		s++;
	}
	m--;
	for (p = m; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
