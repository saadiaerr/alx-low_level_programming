#include "main.h"
/**
  * print_numbers - function that prints the numbers, from 0 to 9
  * Return: 0
  */
void print_numbers(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		_putchar(m + 48);
	}
	_putchar('\n');
}
