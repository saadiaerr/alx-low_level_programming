#include "main.h"
/**
  * print_square - function that prints a square
  * @size: size of the square
  * Return: 0
  */
void print_square(int size)
{
	int l;
	int w;

	for (l = 1; l <= size; l++)
	{
		for (w = 1; w <= size; w++)
			_putchar(35);
		_putchar('\n');
	}
}
