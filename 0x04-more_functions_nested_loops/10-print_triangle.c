#include "main.h"
/**
  * print_triangle - function that prints a triangle
  * @size: size of the triangle
  * Return: 0
  */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int h, b;

		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((h + b) <= size)
					_putchar(32);
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
