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
		for (m = 1; m <= n; m++)
		{
			for (y = 1; y <= m; y++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
