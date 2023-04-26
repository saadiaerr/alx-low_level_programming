#include "main.h"
/**
  * times_table - function that prints the 9 times table, starting with 0
  */
void times_table(void)
{
	int num;
	int mult;
	int prd;
	int u;
	int d;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			prd = num * mult;
			if (prd > 9)
			{
				u = prd % 10;
				d = (prd - u) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else if (mult != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(prd + '0');
		}
		_putchar('\n');
	}
}
