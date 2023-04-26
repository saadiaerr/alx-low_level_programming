#include "main.h"
/**
  * times_table - function that prints the 9 times table, starting with 0
  */
void times_table(void)
{
	int num;
	int mult;
	int prd;

	for (num = 0; num < 10; num++)
	{
		for (mult = 0; mult < 10; mult++)
		{
			prd = num * mult;
			if (prd == 0)
			{
				_putchar(prd + '0');
			}

			if (prd < 10 && mult != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prd + '0');
			}
			else if (prd >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prd / 10) + '0');
				_putchar((prd % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
