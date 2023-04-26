#include "main.h"
/**
  * print_times_table - prints the n times table, starting with 0
  * @n: input number to check
  */
void print_times_table(int n)
{
	int mult, num, pr;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				pr = num * mult;

				if (pr == 0)
				{
					_putchar(pr + '0');
				} else if ( mult != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				} else if (pr >= 10 && pr < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((pr / 10) + '0');
					_putchar((pr % 10) + '0');
				} else if (pr >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((pr / 100) + '0');
					_putchar((pr / 10) % 10 + '0');
					_putchar((pr % 10) + '0');
				}

			} _putchar('\n');
		}
	}
}
