#include "main.h"
/**
  * print_diagonal - function that draws a diagonal line on the terminal.
  * @n: number of times the character \ should be printed
  */
void print_diagonal(int n)
{
	int m;
	int y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < n; m++)
		{
			for (y = 0; y < m; y++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}
