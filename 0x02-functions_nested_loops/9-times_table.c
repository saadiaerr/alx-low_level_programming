#include "main.h"
/**
  * times_table - function that prints the 9 times table, starting with 0
  */
void times_table(void)
{
	int num;
	int mult;
	int prd;

	for (num = 0; num <= 9; num++)
	{
		_putchar(0);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prd = num * mult;

			if (prd <= 9)
				_putchar(' ');
			else
				_putchar((prd / 10) + 0);
				_putchar((prd % 10) + 0);
		}
		_putcharr('\n');
	}
