#include "main.h"
/**
  * print_square - function that prints a square
  * @size: size of the square
  * Return: 0
  */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int l, w;

		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
